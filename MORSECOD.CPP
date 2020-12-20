#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
clrscr();
char st[1000];
int op;
cout<<"\t\tMORSE CODE\n";
cout<<"1) English to Morse Code\n";
cout<<"2) Morse code to English\n";
cout<<"Enter your option:  ";
cin>>op;
if(op==1)
{ cout<<"\n\n\tEnglish to Morse Code\n";
cout<<"Enter the sentence to translate (AVOID OTHER CHARACTERS)   :   ";
gets(st);
cout<<"\nTranslated code   :   ";
for(int i=0; st[i]!='\0'; i++)
{
if(st[i]=='a'||st[i]=='A')
{
cout<<".- ";
}
else
if(st[i]=='b'||st[i]=='B')
{
cout<<"-... ";
}
else
if(st[i]=='c'||st[i]=='C')
{
cout<<"-.-. ";
}
else
if(st[i]=='d'||st[i]=='D')
{
cout<<"-.. ";
}
else
if(st[i]=='e'||st[i]=='E')
{
cout<<". ";
}
else
if(st[i]=='f'||st[i]=='F')
{
cout<<"..-. ";
}
else
if(st[i]=='g'||st[i]=='G')
{
cout<<"--. ";
}
else
if(st[i]=='h'||st[i]=='H')
{
cout<<".... ";
}
else
if(st[i]=='i'||st[i]=='I')
{
cout<<".. ";
}
else
if(st[i]=='j'||st[i]=='J')
{
cout<<".--- ";
}
else
if(st[i]=='k'||st[i]=='K')
{
cout<<"-.- ";
}
else
if(st[i]=='l'||st[i]=='L')
{
cout<<".-.. ";
}
else
if(st[i]=='m'||st[i]=='M')
{
cout<<"-- ";
}
else
if(st[i]=='n'||st[i]=='N')
{
cout<<"-. ";
}
else
if(st[i]=='o'||st[i]=='O')
{
cout<<"--- ";
}
else
if(st[i]=='p'||st[i]=='P')
{
cout<<".--. ";
}
else
if(st[i]=='q'||st[i]=='Q')
{
cout<<"--.- ";
}
else
if(st[i]=='r'||st[i]=='R')
{
cout<<".-. ";
}
else
if(st[i]=='s'||st[i]=='S')
{
cout<<"... ";
}
else
if(st[i]=='t'||st[i]=='T')
{
cout<<"- ";
}
else
if(st[i]=='u'||st[i]=='U')
{
cout<<"..- ";
}
else
if(st[i]=='v'||st[i]=='V')
{
cout<<"...- ";
}
else
if(st[i]=='w'||st[i]=='W')
{
cout<<".-- ";
}
else
if(st[i]=='x'||st[i]=='X')
{
cout<<"-..- ";
}
else
if(st[i]=='y'||st[i]=='Y')
{
cout<<"-.-- ";
}
else
if(st[i]=='z'||st[i]=='Z')
{
cout<<"--.. ";
}
else
if(st[i]==' ')
{
cout<<"   ";
}
else
exit(0);
}
}
else
if(op==2)
{
cout<<"\t\t\nMorse Code to English";
cout<<"\nEnter the Code (ADD SPACE AT THE END OF THE CODE)   :   ";
gets(st);
cout<<"\n";
for(int i=0; st[i]!='\0'; i++)
{
if(st[i]=='.'&&st[i+1]=='-'&&st[i+2]==' ')
{
if(st[i]=='.'&&st[i+1]=='-'&&st[i+2]==' '&&st[i+3]==' ')
{
cout<<"A ";
i+=3;
}
else
if(st[i]=='.'&&st[i+1]=='-'&&st[i+2]==' ')
{
cout<<"A";
i+=2;
}
}


else
if(st[i]=='-'&&st[i+1]=='.'&&st[i+2]=='.'&&st[i+3]=='.'&&st[i+4]==' ')
{
if(st[i]=='-'&&st[i+1]=='.'&&st[i+2]=='.'&&st[i+3]=='.'&&st[i+4]==' '&&st[i+5]==' ')
{
cout<<"B ";
i+=5;
}
else
if(st[i]=='-'&&st[i+1]=='.'&&st[i+2]=='.'&&st[i+3]=='.'&&st[i+4]==' ')
{
cout<<"B";
i+=4;
}
}


else
if(st[i]=='-'&&st[i+1]=='.'&&st[i+2]=='-'&&st[i+3]=='.'&&st[i+4]==' ')
{
if(st[i]=='-'&&st[i+1]=='.'&&st[i+2]=='-'&&st[i+3]=='.'&&st[i+4]==' '&&st[i+5]==' ')
{
cout<<"C ";
i+=5;
}
else
if(st[i]=='-'&&st[i+1]=='.'&&st[i+2]=='-'&&st[i+3]=='.'&&st[i+4]==' ')
{
cout<<"C";
i+=4;
}
}


else
if(st[i]=='-'&&st[i+1]=='.'&&st[i+2]=='.'&&st[i+3]==' ')
{
if(st[i]=='-'&&st[i+1]=='.'&&st[i+2]=='.'&&st[i+3]==' '&&st[i+4]==' ')
{
cout<<"D ";
i+=4;
}
else
if(st[i]=='-'&&st[i+1]=='.'&&st[i+2]=='.'&&st[i+3]==' ')
{
cout<<"D";
i+=3;
}
}


else
if(st[i]=='.'&&st[i+1]==' ')
{
if(st[i]=='.'&&st[i+1]==' '&&st[i+2]==' ')
{
cout<<"E ";
i+=2;
}
else
if(st[i]=='.'&&st[i+1]==' ')
{
cout<<"E";
i+=1;
}
}


else
if(st[i]=='.'&&st[i+1]=='.'&&st[i+2]=='-'&&st[i+3]=='.'&&st[i+4]==' ')
{
if(st[i]=='.'&&st[i+1]=='.'&&st[i+2]=='-'&&st[i+3]=='.'&&st[i+4]==' '&&st[i+5]==' ')
{
cout<<"F ";
i+=5;
}
else
if(st[i]=='.'&&st[i+1]=='.'&&st[i+2]=='-'&&st[i+3]=='.'&&st[i+4]==' ')
{
cout<<"F";
i+=4;
}
}


else
if(st[i]=='-'&&st[i+1]=='-'&&st[i+2]=='.'&&st[i+3]==' ')
{
if(st[i]=='-'&&st[i+1]=='-'&&st[i+2]=='.'&&st[i+3]==' '&&st[i+4]==' ')
{
cout<<"G ";
i+=4;
}
else
if(st[i]=='-'&&st[i+1]=='-'&&st[i+2]=='.'&&st[i+3]==' ')
{
cout<<"G";
i+=3;
}
}


else
if(st[i]=='.'&&st[i+1]=='.'&&st[i+2]=='.'&&st[i+3]=='.'&&st[i+4]==' ')
{
if(st[i]=='.'&&st[i+1]=='.'&&st[i+2]=='.'&&st[i+3]=='.'&&st[i+4]==' '&&st[i+5]==' ')
{
cout<<"H ";
i+=5;
}
else
if(st[i]=='.'&&st[i+1]=='.'&&st[i+2]=='.'&&st[i+3]=='.'&&st[i+4]==' ')
{
cout<<"H";
i+=4;
}
}


else
if(st[i]=='.'&&st[i+1]=='.'&&st[i+2]==' ')
{
if(st[i]=='.'&&st[i+1]=='.'&&st[i+2]==' '&&st[i+3]==' ')
{
cout<<"I ";
i+=3;
}
else
if(st[i]=='.'&&st[i+1]=='.'&&st[i+2]==' ')
{
cout<<"I";
i+=2;
}
}


else
if(st[i]=='.'&&st[i+1]=='-'&&st[i+2]=='-'&&st[i+3]=='-'&&st[i+4]==' ')
{
if(st[i]=='.'&&st[i+1]=='-'&&st[i+2]=='-'&&st[i+3]=='-'&&st[i+4]==' '&&st[i+5]==' ')
{
cout<<"J ";
i+=5;
}
else
if(st[i]=='.'&&st[i+1]=='-'&&st[i+2]=='-'&&st[i+3]=='-'&&st[i+4]==' ')
{
cout<<"J";
i+=4;
}
}


else
if(st[i]=='-'&&st[i+1]=='.'&&st[i+2]=='-'&&st[i+3]==' ')
{
if(st[i]=='-'&&st[i+1]=='.'&&st[i+2]=='-'&&st[i+3]==' '&&st[i+4]==' ')
{
cout<<"K ";
i+=4;
}
else
if(st[i]=='-'&&st[i+1]=='.'&&st[i+2]=='-'&&st[i+3]==' ')
{
cout<<"K";
i+=3;
}
}


else
if(st[i]=='.'&&st[i+1]=='-'&&st[i+2]=='.'&&st[i+3]=='.'&&st[i+4]==' ')
{
if(st[i]=='.'&&st[i+1]=='-'&&st[i+2]=='.'&&st[i+3]=='.'&&st[i+4]==' '&&st[i+5]==' ')
{
cout<<"L ";
i+=5;
}
else
if(st[i]=='.'&&st[i+1]=='-'&&st[i+2]=='.'&&st[i+3]=='.'&&st[i+4]==' ')
{
cout<<"L";
i+=4;
}
}


else
if(st[i]=='-'&&st[i+1]=='-'&&st[i+2]==' ')
{
if(st[i]=='-'&&st[i+1]=='-'&&st[i+2]==' '&&st[i+3]==' ')
{
cout<<"M ";
i+=3;
}
else
if(st[i]=='-'&&st[i+1]=='-'&&st[i+2]==' ')
{
cout<<"M";
i+=2;
}
}


else
if(st[i]=='-'&&st[i+1]=='.'&&st[i+2]==' ')
{
if(st[i]=='-'&&st[i+1]=='.'&&st[i+2]==' '&&st[i+3]==' ')
{
cout<<"N ";
i+=3;
}
else
if(st[i]=='-'&&st[i+1]=='.'&&st[i+2]==' ')
{
cout<<"N";
i+=2;
}
}


else
if(st[i]=='-'&&st[i+1]=='-'&&st[i+2]=='-'&&st[i+3]==' ')
{
if(st[i]=='-'&&st[i+1]=='-'&&st[i+2]=='-'&&st[i+3]==' '&&st[i+4]==' ')
{
cout<<"O ";
i+=4;
}
else
if(st[i]=='-'&&st[i+1]=='-'&&st[i+2]=='-'&&st[i+3]==' ')
{
cout<<"O";
i+=3;
}
}


else
if(st[i]=='.'&&st[i+1]=='-'&&st[i+2]=='-'&&st[i+3]=='.'&&st[i+4]==' ')
{
if(st[i]=='.'&&st[i+1]=='-'&&st[i+2]=='-'&&st[i+3]=='.'&&st[i+4]==' '&&st[i+5]==' ')
{
cout<<"P ";
i+=5;
}
else
if(st[i]=='.'&&st[i+1]=='-'&&st[i+2]=='-'&&st[i+3]=='.'&&st[i+4]==' ')
{
cout<<"P";
i+=4;
}
}


else
if(st[i]=='-'&&st[i+1]=='-'&&st[i+2]=='.'&&st[i+3]=='-'&&st[i+4]==' ')
{
if(st[i]=='-'&&st[i+1]=='-'&&st[i+2]=='.'&&st[i+3]=='-'&&st[i+4]==' '&&st[i+5]==' ')
{
cout<<"Q ";
i+=5;
}
else
if(st[i]=='-'&&st[i+1]=='-'&&st[i+2]=='.'&&st[i+3]=='-'&&st[i+4]==' ')
{
cout<<"Q";
i+=4;
}
}


else
if(st[i]=='.'&&st[i+1]=='-'&&st[i+2]=='.'&&st[i+3]==' ')
{
if(st[i]=='.'&&st[i+1]=='-'&&st[i+2]=='.'&&st[i+3]==' '&&st[i+4]==' ')
{
cout<<"R ";
i+=4;
}
else
if(st[i]=='.'&&st[i+1]=='-'&&st[i+2]=='.'&&st[i+3]==' ')
{
cout<<"R";
i+=3;
}
}


else
if(st[i]=='.'&&st[i+1]=='.'&&st[i+2]=='.'&&st[i+3]==' ')
{
if(st[i]=='.'&&st[i+1]=='.'&&st[i+2]=='.'&&st[i+3]==' '&&st[i+4]==' ')
{
cout<<"S ";
i+=4;
}
else
if(st[i]=='.'&&st[i+1]=='.'&&st[i+2]=='.'&&st[i+3]==' ')
{
cout<<"S";
i+=3;
}
}


else
if(st[i]=='-'&&st[i+1]==' ')
{
if(st[i]=='-'&&st[i+1]==' '&&st[i+2]==' ')
{
cout<<"T ";
i+=2;
}
else
if(st[i]=='-'&&st[i+1]==' ')
{
cout<<"T";
i+=1;
}
}


else
if(st[i]=='.'&&st[i+1]=='.'&&st[i+2]=='-'&&st[i+3]==' ')
{
if(st[i]=='.'&&st[i+1]=='.'&&st[i+2]=='-'&&st[i+3]==' '&&st[i+4]==' ')
{
cout<<"U ";
i+=4;
}
else
if(st[i]=='.'&&st[i+1]=='.'&&st[i+2]=='-'&&st[i+3]==' ')
{
cout<<"U";
i+=3;
}
}


else
if(st[i]=='.'&&st[i+1]=='.'&&st[i+2]=='.'&&st[i+3]=='-'&&st[i+4]==' ')
{
if(st[i]=='.'&&st[i+1]=='.'&&st[i+2]=='.'&&st[i+3]=='-'&&st[i+4]==' '&&st[i+5]==' ')
{
cout<<"V ";
i+=5;
}
else
if(st[i]=='.'&&st[i+1]=='.'&&st[i+2]=='.'&&st[i+3]=='-'&&st[i+4]==' ')
{
cout<<"V";
i+=4;
}
}


else
if(st[i]=='.'&&st[i+1]=='-'&&st[i+2]=='-'&&st[i+3]==' ')
{
if(st[i]=='.'&&st[i+1]=='-'&&st[i+2]=='-'&&st[i+3]==' '&&st[i+4]==' ')
{
cout<<"W ";
i+=4;
}
else
if(st[i]=='.'&&st[i+1]=='-'&&st[i+2]=='-'&&st[i+3]==' ')
{
cout<<"W";
i+=3;
}
}


else
if(st[i]=='-'&&st[i+1]=='.'&&st[i+2]=='.'&&st[i+3]=='-'&&st[i+4]==' ')
{
if(st[i]=='-'&&st[i+1]=='.'&&st[i+2]=='.'&&st[i+3]=='-'&&st[i+4]==' '&&st[i+5]==' ')
{
cout<<"X ";
i+=5;
}
else
if(st[i]=='-'&&st[i+1]=='.'&&st[i+2]=='.'&&st[i+3]=='-'&&st[i+4]==' ')
{
cout<<"X";
i+=4;
}
}


else
if(st[i]=='-'&&st[i+1]=='.'&&st[i+2]=='-'&&st[i+3]=='-'&&st[i+4]==' ')
{
if(st[i]=='-'&&st[i+1]=='.'&&st[i+2]=='-'&&st[i+3]=='-'&&st[i+4]==' '&&st[i+5]==' ')
{
cout<<"Y ";
i+=5;
}
else
if(st[i]=='-'&&st[i+1]=='.'&&st[i+2]=='-'&&st[i+3]=='-'&&st[i+4]==' ')
{
cout<<"Y";
i+=4;
}
}


else
if(st[i]=='-'&&st[i+1]=='-'&&st[i+2]=='.'&&st[i+3]=='.'&&st[i+4]==' ')
{
if(st[i]=='-'&&st[i+1]=='-'&&st[i+2]=='.'&&st[i+3]=='.'&&st[i+4]==' '&&st[i+5]==' ')
{
cout<<"Z ";
i+=5;
}
else
if(st[i]=='-'&&st[i+1]=='-'&&st[i+2]=='.'&&st[i+3]=='.'&&st[i+4]==' ')
{
cout<<"Z";
i+=4;
}
}


else
{
exit(0);
}
}
}
else
{
cout<<"\t\t\nInvalid Option";
}
getch();
}











