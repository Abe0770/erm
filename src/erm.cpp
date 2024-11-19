#include <bits/stdc++.h>
#include <unistd.h>

using namespace std;
#include <getopt.h>

#define no_argument 0
#define required_argument 1 
#define optional_argument 2


void create_text_file(char f_name[32]) {
	fstream f;
	f.open(f_name, ios::in);
	if(f) {
		cout << "File " << f_name << " already exists.\n";
		f.close();
	}
	else {
		f.open(f_name, ios::out);
		f.close();
	}
}

void create_binary_file(char f_name[32]) {
	fstream f;
	f.open(f_name, ios::in);
	if(f) {
		cout << "File " << f_name << " already exists.\n";
		f.close();
	}
	else {
		f.open(f_name, ios::out | ios::binary);
		f.close();
	}
}

void delete_file_content(char f_name[32]) {
	fstream f;
	f.open(f_name, ios::in);
	if(!f) {
		cout << "File " << f_name << " does not exist.\n";
		f.close();
	}
	else {	f.close();
		f.open(f_name, ios::out | ios::trunc);
		f.close();
	}
}

void delete_file(char f_name[32]) {
	fstream f;
	f.open(f_name, ios::in);
	if(!f)
		cout << "File " << f_name << " was not found!\n";
	else {
		f.close();
		remove(f_name);
	}
}

void append_to_file(char f_name[32], char f_app[128]) {
	fstream f;
	f.open(f_name, ios::out | ios::app);
	f << f_app << ' ';
	f.close();
}

void rename_file(char f_name[32], char nf_name[32]) {
	fstream f;
	f.open(f_name, ios::in);
	if(!f)
		cout << "File " << f_name << " was not found!\n";
	else
		rename(f_name, nf_name);
	f.close();
}

void help_() {
	cout << "Usage: erm [OPTION]... FILE...\n\nMandaatory flags and arguements\n";
	cout << "Syntax [FLAG] [FILE/FILES]\n\n";
	cout << "-T	Create a text file/files\n";
	cout << "-P	Purge the contents in a file/files\n";
	cout << "-B	Create a binary file/files\n";
	cout << "-A	Append text to a file/files\n";
	cout << "-D	Delete file/files\n";
	cout << "-R	Rename a file\n";
	cout << "-H	Help menu\n";
	cout << "-M	Merge file/files\n";
	cout << "-D	Display the details of a file\n";
}

void merge_files(char f_name[32], char f1_name[32]) {
	fstream f;
	char ch[4096];
	f.open(f_name, ios::out | ios::app);
	fstream f1;
	f1.open(f1_name, ios::in);
	f << '\n';
	while(f1.getline(ch, 4096, '\n'))
		f << ch << '\n';
	f.close();
	f1.close();
}

void file_dets(char f_name[]) {
	char ch[4096];
	int l=0, word=0, chara=0;
	fstream f;
	f.open(f_name, ios::in);
	if(!f)
	cout << "Sucker! file " << f_name << " doesn't exist.\n";
	else {
		while(f.getline(ch, 4096, '\n'))
			l++;
		f.close();
		f.open(f_name, ios::in);
		while(f.getline(ch, 4096, ' '))
			word++;
		f.close();
		f.open(f_name, ios::in);
		while(f.getline(ch, 4096, '\n'))
			chara+=sizeof(ch);
		cout << "Number of lines : " << l << "\nNumber of words : " << word;
		cout << "\nNumber of characters : "<< chara << "\n";
		f.close();
	}
}

int main(int argc, char* argv[]) { // argc takes the number of arguements specified, and argv takes the arguements specified
	int c;
	int index;
	if(argc < 2)
		cout << "erm: missing file operands \n\"Try \'erm -H help\' for more information\" \n";
	else {
		if((c = getopt(argc, argv, "T:P:B:A:D:R:H:M:W")) != -1)	{
			switch(c) {
				case 'T':  							// Create a file
					for(int i=2; i<argc; i++)
						create_text_file(argv[i]);
					break;
				case 'P':							// Delete the contents of a file
					for(int i=2; i<argc; i++)
						delete_file_content(argv[i]);
					break;
				case 'B':							// Create a binary data file
					for(int i=2; i<argc; i++)				
						create_binary_file(argv[i]);
					break;
				case 'A':							// Append to a file
					for(int i=3; i<argc; i++)				
						append_to_file(argv[2], argv[i]);
					break;
				case 'D':							// Delete a file
					for(int i=2; i<argc; i++)
						delete_file(argv[i]);
					break;
				case 'R':							// Rename a file
					rename_file(argv[2], argv[3]);
					break;
				case 'H':							// Displays help
					help_();
					break;
				case 'M':							// Merge two files 
					for(int i=3; i<argc; i++)
						merge_files(argv[2], argv[i]);
					break;
				case 'W':							// displays the details of a file
					file_dets(argv[2]);
					break;
				default:
					cout<<"Missing arguements!!";
					abort();
			}
		}
		else
			cout << "Missing flags or invalid arguements\n";
	}
	return 0;
}
