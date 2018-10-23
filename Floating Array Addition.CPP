#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 float a[3][3],b[3][3],c[3][3],i,j;
 cout<<"Enter values of 1st array\n";
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   cin>>a[i][j];
  }
 }
 cout<<"Enter values of 2nd array\n";
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   cin>>b[i][j];
  }
 }
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   c[i][j]=a[i][j]+b[i][j];
  }
 }
 cout<<"Displaying array after addition\n";
 for(i=3;i>0;i--)
 {
  for(j=3;j>0;j--)
  {
   cout<<c[i][j]<<endl;
  }
 }
 getch();
}