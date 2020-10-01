#include<stdlib.h>
#include<constream.h>
#include<conio.h>
#include<process.h>
struct arr
{
int p[3][3];
};
/* Logic of random number and space genration in sudoku
void r1(arr g[])
{
int l;
int i,j,k,m,n,a,c=0,c1=0;
l=random(10);
i=random(9);
j=random(3);
k=random(3);

do
{
c=0;
c1=0;
if(l!=0)
	{
	for(m=0;m<3;m++)
	{
	for(n=0;n<3;n++)
	{
	if(g[i].p[m][n]==l)
	c=1;
	}
	if(c==1)
	break;
	}
		if(c==0)
		{
		a=i/3;

		switch(a)
		{
		case 0:m=0;
			break;
		case 1:m=3;
			break;
		case 2:m=6;
			break;
		default:{
			}
			break;
		}
		for(;m<(3*((i/3)+1));m+=1)
		{
		for(n=0;n<3;n++)
		{
		if(m!=i&&n!=k)
		{
		if(g[m].p[j][n]==l)
		c1=1;
		}
		}
		if(c1==1)
		break;
		}
			if(c1==0)
			{
			for(m=i%3;m<9;m+=3)
			{
			for(n=0;n<3;n++)
			{
			if(m!=i&&n!=j)
			{
			if(g[m].p[n][k]==l);
			c1=1;
			}
			}
			if(c1==1)
			break;
			}
			}
		}

}
else
c=1;
if((c1==1)||(c==1))
l++;
}while(c1==1||c==1);
}
*/
void g2(arr g[])
{
	g[0].p[2][0]=6;
	g[0].p[2][2]=8;
	g[1].p[0][0]=9;
	g[1].p[0][2]=3;
	g[2].p[0][0]=8;
	g[2].p[0][2]=1;
	g[2].p[2][2]=4;
	g[3].p[0][0]=2;
	g[3].p[0][1]=9;
	g[3].p[0][2]=6;
	g[3].p[2][0]=8;
	g[4].p[0][0]=8;
	g[4].p[1][2]=2;
	g[4].p[2][1]=5;
	g[5].p[0][1]=6;
	g[6].p[0][1]=6;
	g[6].p[2][0]=5;
	g[7].p[1][1]=7;
	g[7].p[2][2]=4;
	g[8].p[0][1]=3;
}
void g1(arr g[])
{
	g[0].p[2][2]=4;
	g[1].p[0][1]=1;
	g[1].p[1][1]=7;
	g[1].p[1][2]=3;
	g[1].p[2][1]=8;
	g[1].p[2][2]=9;
	g[2].p[0][0]=3;
	g[2].p[0][1]=6;
	g[2].p[1][0]=5;
	g[2].p[2][2]=7;
	g[3].p[0][0]=8;
	g[3].p[1][1]=9;
	g[3].p[2][0]=2;
	g[3].p[2][2]=3;
	g[4].p[0][0]=4;
	g[4].p[1][2]=1;
	g[5].p[1][1]=2;
	g[6].p[0][1]=4;
	g[6].p[2][1]=1;
	g[7].p[0][1]=5;
	g[7].p[2][2]=7;
	g[8].p[0][2]=1;
	g[8].p[1][2]=5;
	g[8].p[0][2]=9;
}

int check(arr g[])
{
int i,j,k,c=0;
for(i=0;i<9;i++)
{
for(j=0;j<3;j++)
{
for(k=0;k<3;k++)
{
if(g[i].p[j][k]==0);
c=1;
}
}
if(c==1)
break;
}
return c;
}
void showarray(arr g[])
{
clrscr();
int i,j,k,l,a,b,m,n;
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		for(k=3*i;k<3*(i+1);k++)
		{
			for(l=0;l<3;l++)
			{

			  if(l==0&&k!=3*i)
			  m=1;
			  else
			  m=0;
			  if(j==0&&i!=0)
			  n=1;
			  else
			  n=0;
			  if(i==0)
			  a=((3*k)+l)+1;
			  else
			  a=((3*(k%(3*i)))+l)+1;
			  b=((3*i)+j)+1;
			  gotoxy((4*a)+m,(4*b)+n);
			  cout<<g[k].p[j][l];

			}
		}
	}
}
}
void main()
{
clrscr();
arr g[9];
int i,j,s=0,c1=0,c2=0,l,k,m,s1=0,a,b;
char ch,gh;
/*assign 0 initialy to all elements of array g[]*/
for(i=0;i<9;i++)
{
	for(j=0;j<3;j++)
	{
	for(k=0;k<3;k++)
		g[i].p[j][k]=0;
	}
}
i=0;
do
{
cout<<"\n\n\t\t\t\t\tSUDOKU\n\n\n\n\n\n\n\n";
cout<<"\t\t\t\tEnter sudoku no.(1/2) = ";
cin>>a;

if(a==1)
g1(g);
else
{
if(a==2)
g2(g);
else
i=1;
}
}while(i!=0);
/*user's choice code*/
do
{
	showarray(g);

cout<<"\n\n\n"<<"Enter position(horizontal) = ";
cin>>b;
cout<<"\nEnter position(vertical) = ";
cin>>a;
if((a>=1)&&(a<=9)&&(b>=1)&&(b<=9))
	{
	cout<<"\nEnter the number = ";
	cin>>l;
	if((l>=1)&&(l<=9))
	{
		a--;
		b--;
		k=a/3;
		i=b/3;
		a%=3;
		b%=3;
		if((g[k+i].p[a][b]!=l)&&(g[k+i].p[a][b]!=0))
		{
		cout<<"\nDo you want to owerwrite(y/n) ";
		cin>>ch;
		if(ch=='y'||ch=='Y')
			{
			g[k+i].p[a][b]=l;
			showarray(g);
			}
		}
		else
			{
			g[k+i].p[a][b]=l;
			showarray(g);
			cout<<"\n";
			}
	}
else
cout<<"Invalid no. entered";
}
else
cout<<"Invalid pos.";
cout<<"\nDo you want to continue(y/n) ";
cin>>gh;
if(gh=='n'||gh=='N')
	{
	cout<<"\nDo you want to exit(y/n) ? ";
	cin>>gh;
	if(gh=='y'||gh=='Y')
	{
	if(check(g)==1)
		{
		cout<<"\nThe sudoku is still not completed.\n\nDo you still want to exit ? ";
		cin>>ch;
		if(ch=='y'||ch=='Y')
		gh='n';
		else
		{
			if(ch=='n'||ch=='N')
			gh='Y';
			else
			cout<<"invalid choice";
		}
		}
       else
       gh='n';
		}
	else
	{
		if(gh=='n'||gh=='N')
		gh='y';

	}
}
}while((gh=='y')||(gh=='Y'));

/*code to check the 1d array of matrices*/
for(i=0;i<9;i++)
{
for(j=0;j<3;j++)
{
	for(k=0;k<3;k++)
		s+=g[i].p[j][k];
}
if(s!=45)
{
break;
}
else
{
c1++;
s=0;
}
}
if(c1==9)
{
s=0;
for(i=0;i<3;i++)
{
	for(k=0;k<3;k++) /* picks columns one by one*/
	{
		for(j=k,m=3*k;j<9;j+=3,m++) /*picks 3x3 grids from 1d
					array g[] of matrices*/
		{
			for(l=0;l<3;l++) /*loop to move pointer
					  to column elements of a matrix*/
			{
			s+=g[j].p[l][i];
			s1+=g[m].p[i][l];
			}
		}
		if(s!=45&&s1!=45)
		{
		}
		else
		{
		s1=0;
		s=0;
		c2++;
		}

s=0;    }

}
}
cout<<"\n";
if((c1==9)&&(c2==9))
{
cprintf("CORRECT");
textcolor(GREEN+BLINK);
textbackground(WHITE);
}
else
cprintf("INCORRECT");
textcolor(RED+BLINK);
textbackground(WHITE);
getch();
}

