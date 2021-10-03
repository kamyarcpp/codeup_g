#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <cstring>
using namespace std;


void color()
{
	
	
	
		int w;
		srand(time(0));
		w=rand()%6+1;
		if(w==1)
		{
			system("color 7c");
		}	
		else if(w==2)
		{
			system("color 29");
		}
		else if(w==3)
		{
			system("color 5e");
		}
		else if(w==4)
		{
			system("color 38");
		}
		else if(w==5)
		{
			system("color 48");
		}
		else if(w==5)
		{
			system("color 5f");
		}
	
	
	
}
void dash() // dash=500
{
	Beep(500,300);
	Sleep(300);
	cout<<"-";


}
void dit() // dit=900
{
	Beep(900,300);
	Sleep(300);
	cout<<".";
	
}
void mayn()
{


	string s, x;
	cout<<"Lotfan matn ra vared konid :"<<endl;
	getline(cin,s);
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='A' || s[i]=='a')
		{
			x=".- ";
		}
		else if(s[i]=='B' || s[i]=='b')
		{
			x="-... ";
		}
		else if(s[i]=='C' || s[i]=='c')
		{
			x="-.-. ";
		}
		else if(s[i]=='D' || s[i]=='d')
		{
			x="-.. ";
		}
		else if(s[i]=='E' || s[i]=='e')
		{
			x=". ";
		}
		else if(s[i]=='F' || s[i]=='f')
		{
			x="..-. ";
		}
		else if(s[i]=='G' || s[i]=='g')
		{
			x="--. ";
		}
		else if(s[i]=='H' || s[i]=='h')
		{
			x=".... ";
		}
		else if(s[i]=='I' || s[i]=='i')
		{
			x=".. ";
		}
		else if(s[i]=='J' || s[i]=='j')
		{
			x=".--- ";
		}
		else if(s[i]=='K' || s[i]=='k')
		{
			x="-.- ";
		}
		else if(s[i]=='L' || s[i]=='l')
		{
			x=".-.. ";
		}
		else if(s[i]=='M' || s[i]=='m')
		{
			x="-- ";
		}
		else if(s[i]=='N' || s[i]=='n')
		{
			x="-. ";
		}
		else if(s[i]=='O' || s[i]=='o')
		{
			x="--- ";
		}
		else if(s[i]=='P' || s[i]=='p')
		{
			x=".--. ";
		}
		else if(s[i]=='Q' || s[i]=='q')
		{
			x="--.- ";
		}
		else if(s[i]=='R' || s[i]=='r')
		{
			x=".-. ";
		}
		else if(s[i]=='S' || s[i]=='s')
		{
			x="... ";
		}
		else if(s[i]=='T' || s[i]=='t')
		{
			x="- ";
		}
		else if(s[i]=='U' || s[i]=='u')
		{
			x="..- ";
		}
		else if(s[i]=='V' || s[i]=='v' )
		{
			x="...- ";
		}
		else if(s[i]=='W' || s[i]=='w')
		{
			x=".-- ";
		}
		else if(s[i]=='X' || s[i]=='x')
		{
			x="-..- ";
		}
		else if(s[i]=='Y' || s[i]=='y')
		{
			x="-.-- ";
		}
		else if(s[i]=='Z' || s[i]=='z')
		{
			x="--.. ";
		}
		else if(s[i]=='1' )
		{
			x=".---- ";
		}
		else if(s[i]=='2' )
		{
			x="..--- ";
		}
		else if(s[i]=='3' )
		{
			x="...-- ";
		}
		else if(s[i]=='4' )
		{
			x="....- ";
		}
		else if(s[i]=='5' )
		{
			x="..... ";
		}
		else if(s[i]=='6' )
		{
			x="-.... ";
		}
		else if(s[i]=='7' )
		{
			x="--... ";
		}
		else if(s[i]=='8' )
		{
			x="---.. ";
		}
		else if(s[i]=='9' )
		{
			x="----. ";
		}
		else if(s[i]=='0' )
		{
			x="----- ";
		}
		else if(s[i]!='a' || s[i]!='A' || s[i]!='b' || s[i]!='B'|| s[i]!='c'|| s[i]!='C'|| s[i]!='d'|| s[i]!='D'|| s[i]!='e'|| s[i]!='E'|| s[i]!='f'|| s[i]!='F'|| s[i]!='g'|| s[i]!='G'|| s[i]!='h'|| s[i]!='H'|| s[i]!='i'|| s[i]!='I'|| s[i]!='j'|| s[i]!='J'|| s[i]!='k'|| s[i]!='K'|| s[i]!='l'|| s[i]!='L'|| s[i]!='m'|| s[i]!='M'|| s[i]!='n'|| s[i]!='N'|| s[i]!='o'|| s[i]!='O'|| s[i]!='p'|| s[i]!='P'|| s[i]!='q'|| s[i]!='Q'|| s[i]!='r'|| s[i]!='R'|| s[i]!='s'|| s[i]!='S'|| s[i]!='t'|| s[i]!='T'|| s[i]!='u'|| s[i]!='U'|| s[i]!='v'|| s[i]!='V'|| s[i]!='w'|| s[i]!='W'|| s[i]!='x'|| s[i]!='X'|| s[i]!='y'|| s[i]!='Y'|| s[i]!='z'|| s[i]!='Z'|| s[i]!='0'|| s[i]!='1'|| s[i]!='2'|| s[i]!='3'|| s[i]!='4'|| s[i]!='5'|| s[i]!='6'|| s[i]!='7'|| s[i]!='8'|| s[i]!='9')
		{
			x=" ";
		}
		else if(s[i]==' ')
		{
			Sleep(2100);
		}
		
		for(int j=0;j<x.size();j++)
		{
			if(x[j]=='-')
			{
				dash();
				
			}
			else if(x[j]=='.')
			{
				dit();
			}
			else if(x[j]==' ')
			{
			
			
				cout<<" ";
				Sleep(900);
			}
			color();
			
			
		}
		
		
		
	}
}
int main()
{
	
	mayn();
}
