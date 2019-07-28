#include<iostream>
#include <cstdlib>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
 {
  int o;             //A variable to take option chosen by user for main menu
   char word[100];   //String word is entered in this variable
   menu2:           //A GOTO statement to come back to this starting menu point
   system("clear");        //An inbuilt-function to clear the output of previous program in Linux
   cout<<"*******************************PATTERN MANIA************************************";
   cout<<"\n###Don't enter an invalid option as it would Be considered as EXIT command.###";
   cout<<"\n\t^^^Choose An Option^^^";
   cout<<"\n\t1.Printing The Pattern of the Sentence";
   cout<<"\n\t2.Exit";
   cout<<"\n\tEnter an option:";
   cin>>o;          //Inputing An Option Entered By User
   if(o==1)  // Pattern Of Word Entered By User
   {
   system("clear");
   label:
   cout<<"\nEnter A Word Or A Sentence As You Want:\n";
   getchar();
   cin.getline(word,100);
   int gaps[20];
   int c=strlen(word);
    for(int i=0;i<=c;i++) { 
      /* Here we are performing a check so that only lowercase 
       * characters gets converted into uppercase. 
       * ASCII value of a to z(lowercase chars) ranges from 97 to 122 
       */ 
      if(word[i]>=97 && word[i]<=122)
      {
		word[i]=word[i]-32;
      }
   }
   int a2=1;
   for(int a1=0;a1<=c;a1++) //Detecting the spaces ,and the non-alphabetical characters entered by user
   {
   if(isalpha(word[a1])==0&&isspace(word[a1])==0&&a1!=c)
     {
     cout<<"\n*******************************Invaid String*************************";
     goto label;
     }
   if(word[a1]==' '&&word[a1+1]!=' ')
     {
     gaps[a2]=a1;
     a2++;
     }
   }
   gaps[0]=0;
   gaps[a2]=c-1;
   for(int ew=0;ew<a2;ew++)
    {
cout<<"\n";
    for(int a=1;a<=5;a++)
     {
       cout<<"\n";
       for(int i=gaps[ew];i<=gaps[ew+1];i++)
	{
	cout<<" ";
	 if(word[i]=='A')                        //Pattern For Alphabet A
	  {
	    for(int b=1;b<=4;b++)
	    {
	     if(a==1||a==3||b==1||b==4)
	     cout<<"A";
	     else
	     cout<<" ";
	    }
	  }
	 else if(word[i]=='B')                  //Pattern For Alphabet B
	  {
	    for(int b=1;b<=4;b++)
	    {
	     if(b==1||b==4||a==1||a==3||a==5)
	     cout<<"B";
	     else
	     cout<<" ";
	    }
	  }
	 else if(word[i]=='C')                 //Pattern For Alphabet C
	  {
	    for(int c=1;c<=4;c++)
	    {
	     if(a==1||c==1||a==5)
	     cout<<"C";
	     else
	     cout<<" ";
	    }
	  }
	 else if(word[i]=='D')                 //Pattern For Alphabet D
	  {
	    for(int d=1;d<=4;d++)
	    {
	    if((a==1&&d!=4)||(a==5&&d!=4)||d==1||(a!=1&&a!=5&&d==4))
	    cout<<"D";
	    else
	    cout<<" ";
	    }
	  }
	 else if(word[i]=='E')                 //Pattern For Alphabet E
	  {
	    for(int e=1;e<=3;e++)
	    {
	    if(a==1||e==1||a==3||a==5)
	    cout<<"E";
	    else
	    cout<<" ";
	    }
	  }
	 else if(word[i]=='F')                 //Pattern For Alphabet F
	  {
	    for(int f=1;f<=3;f++)
	    {
	    if(a==1||a==3||f==1)
	    cout<<"F";
	    else
	    cout<<" ";
	    }
	  }
	 else if(word[i]=='G')                 //Pattern For Alphabet G
	  {
	    for(int g=1;g<=5;g++)
	    {
	    if(a==1&&g!=1)
	    cout<<"G";
	    else if(a==2&&g==1)
	    cout<<"G";
	    else if(a==3&&g!=2)
	    cout<<"G";
	    else if(a==4&&g!=2&&g!=3)
	    cout<<"G";
	    else if(a==5&&g!=1)
	    cout<<"G";
	    else
	    cout<<" ";
	    }
	  }
	 else if(word[i]=='H')                 //Pattern For Alphabet H
	  {
	    for(int h=1;h<=4;h++)
	    {
	    if(h==1||h==4||a==3)
	    cout<<"H";
	    else
	    cout<<" ";
	    }
	  }
	 else if(word[i]=='I')                 //Pattern For Alphabet I
	  {
	   for(int i=1;i<=5;i++)
	   {
	    if(a==1||a==5||i==3)
	    cout<<"I";
	    else
	    cout<<" ";
	   }
	  }
	 else if(word[i]=='J')                 //Pattern For Alphabet J
	  {
	   for(int j=1;j<=5;j++)
	   {
	    if((a==1)||(a<=4&&(j==4))||(a==4&&j==1))
	    cout<<"J";
	    else if(a==5&&(j==3||j==2))
	    cout<<"J";
	    else
	    cout<<" ";
	   }
	  }
	 else if(word[i]=='K')                 //Pattern For Alphabet K
	  {
	   for(int k=1;k<=4;k++)
	   {
	   if(k==1)
	   cout<<"K";
	   else if(k+a==5)
	   cout<<"K";
	   else if(a==4&&k==3)
	   cout<<"K";
	   else if(a==5&&k==4)
	   cout<<"K";
	   else
	   cout<<" ";
	   }
	 }
	else if(word[i]=='L')                  //Pattern For Alphabet L
	 {
	  for(int l=1;l<=4;l++)
	  {
	   if(l==1||a==5)
	   cout<<"L";
	   else
	   cout<<" ";
	  }
	 }
	else if(word[i]=='M')                  //Pattern For Alphabet M
	 {
	  for(int m=1;m<=5;m++)
	  {
	   if(m==1||m==5)
	   cout<<"M";
	   else if((a==2&&m%2==0)||a==3&&m==3)
	   cout<<"M";
	   else
	   cout<<" ";
	  }
	 }
	else if(word[i]=='N')                  //Pattern For Alphabet N
	 {
	  for(int n=1;n<=5;n++)
	  {
	  if(n==1||n==a||n==5)
	  cout<<"N";
	  else
	  cout<<" ";
	  }
	 }
	else if(word[i]=='O')                  //Pattern For Alphabet O
	 {
	  for(int o=1;o<=4;o++)
	  {
	  if((a==1&&o!=4&&o!=1)||(a==5&&o!=4&&o!=1)||(a!=1&&a!=5&&(o==4||o==1)) )
	  cout<<"O";
	  else
	  cout<<" ";
	  }
	 }
	else if(word[i]=='P')                  //Pattern For Alphabet P
	 {
	   for(int p=1;p<=4;p++)
	   {
	   if((p!=4&&a==1)||p==1||(a==3&&p!=4)||(a==2&&p==4))
	   cout<<"P";
	   else
	   cout<<" ";
	   }
	 }
	else if(word[i]=='Q')                  //Pattern For Alphabet Q
	 {
	  for(int q=1;q<=5;q++)
	  {
	  if(a==2&&(q==5||q==1))
	  cout<<"Q";
	  else if(a==3&&q%2==1)
	  cout<<"Q";
	  else if((a==1||a==4)&&q!=1&&q!=5)
	  cout<<"Q";
	  else if(a==5&&q==5)
	  cout<<"Q";
	  else
	  cout<<" ";
	  }
	 }
	else if(word[i]=='R')                  //Pattern For Alphabet R
	 {
	  for(int r=1;r<=4;r++)
	  {
	  if((r!=4&&a==1)||r==1||(a==3&&r!=4)||(a==2&&r==4))
	  cout<<"R";
	  else if(a==4&&r==3)
	  cout<<"R";
	  else if(a==5&&r==4)
	  cout<<"R";
	  else
	  cout<<" ";
	  }
	 }
	else if(word[i]=='S')                  //Pattern For Alphabet S
	 {
	  for(int s=1;s<=3;s++)
	  {
	   if(a==1||(a<3&&s==1)||a==3||a==5)
	   cout<<"S";
	   else if(a==4&&s==3)
	   cout<<"S";
	   else
	   cout<<" ";
	  }
	}
       else if(word[i]=='T')                   //Pattern For Alphabet T
	{
	 for(int t=1;t<=5;t++)
	 {
	  if(t==3||a==1)
	  cout<<"T";
	  else
	  cout<<" ";
	 }
	}
       else if(word[i]=='U')                   //Pattern For Alphabet U
	{
	 for (int u=1;u<=5;u++)
	 {
	 if(a<=4&&(u==1||u==5))
	 cout<<"U";
	 else if(a==5&&(u!=1&&u!=5))
	 cout<<"U";
	 else
	 cout<<" ";
	 }
	}
       else if(word[i]=='V')                   //Pattern For Alphabet V
	{
	for(int v=1;v<=5;v++)
	 {
	 if(a<=3&&(v==1||v==5))
	 cout<<"V";
	 else if(a==4&&(v%2==0))
	 cout<<"V";
	 else if(a==5&&v==3)
	 cout<<"V";
	 else
	 cout<<" ";
	 }
	}
       else if(word[i]=='W')                   //Pattern For Alphabet W
	{
	 for(int w=1;w<=5;w++)
	 {
	 if(w==1||w==5)
	 cout<<"W" ;
	 else if(a==3&&w==3)
	 cout<<"W";
	 else if(a==4&&w%2==0)
	 cout<<"W";
	 else
	 cout<<" ";
	 }
	}
       else if(word[i]=='X')                   //Pattern For Alphabet X
	{
	 for(int x=1;x<=5;x++)
	 {
	 if(x==a||x+a==6)
	 cout<<"X";
	 else
	 cout<<" ";
	 }
	}
       else if(word[i]=='Y')                   //Pattern For Alphabet Y
	{
	 for(int y=1;y<=5;y++)
	 {
	 if(y==a&&a<3)
	 cout<<"Y";
	 else if(a>=3&&y==3)
	 cout<<"Y";
	 else if(a<3&&a+y==6)
	 cout<<"Y";
	 else
	 cout<<" ";
	 }
	}
       else if(word[i]=='Z')                   //Pattern For Alphabet Z
	{
	 for(int z=5;z>=1;z--)
	 {
	 if(z==a||a==1||a==5)
	 cout<<"Z";
	 else
	 cout<<" ";
	 }
	}
	else
	{
	}
      }
    }
  }
   int menu;
   cout<<"\n\n\n\ntWant to Goto:\n\t1.Main Menu\n\t2.Want to enter String again\n\t3.Exit\n\tEnter an option=";
   cin>>menu;
   if(menu==2)
   {
    goto label; //User  wants  to Enter A String Again
   }
   else if(menu==1)
   {
    goto menu2;   //User Wants To GoTo Main Menu
   }
   else
   exit(0);   //Exit from program
  }
  else
  exit(0);
  int trmin;
  cout<<"\n\tWant To Continue \n\t1.Yes\n\t2.No\n\tEnter an option=";
  cin>>trmin;
  if(trmin==1)
  {
	  system("clear");
	  goto menu2;//User Wants To GoTo Main Menu
  }
}
