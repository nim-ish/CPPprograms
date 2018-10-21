// CPP Program for finding sum of main diagonal elements of a 2-D mattrix
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[100][100],i,j,s=0,r,c;
 cout<<"Enter the dimension of the array";
 cin>>r>>c;
 cout<<"Enter the elements";
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   cin>>a[i][j];
  }
 }
 for(i=0;i<r;i++)
 {
  for(j=0;j<=i;j++)
  {
   s+=a[i][j];
  }
 }
 cout<<"Sum of main diagonal elements :"<<s;
 getch();
}