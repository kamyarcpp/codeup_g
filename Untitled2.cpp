#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

void color()
{
	string s;
	int b;
	cout<<"che rangi ro mikhahid?"<<endl<<"red"<<endl<<"green"<<endl<<"yellow"<<endl<<"white"<<endl<<"Blue"<<endl<<"random"<<endl;
	cin>>s;
	if(s=="red")
	{
		b=1;
		system("color cf ");
	}
	else if(s=="green")
	{
		system("color af");
		b=2;
	}
	else if(s=="yellow")
	{
		system("color 6f");
		b=3;
	}
	else if(s=="white")
	{
		system("color f0");
		b=4;
	}
	else if(s=="blue")
	{
		system("color bf");
		b=5;
	}
	else if(s=="random")
	{
		int n;
		srand(time(0));
		n=rand()%5+1;
		if(n==1)
		{
			system("color cf ");	
				b=n;
		}
		else if(n==2)
		{
				system("color af");
					b=n;
		}
		else if(n==3)
		{
			system("color ef");
				b=n;
		}
		else if(n==4)
		{
			system("color f0");
				b=n;
		}
		else if(n==5)
		{
				system("color bf");
				b=n;
		}

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
void mayn ()
{
	

	string s, x;
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
				Sleep(1000);
				cout<<" ";
			}
			
		}
		
		
		
	}
}
int main()
{

	
	mayn();
}
