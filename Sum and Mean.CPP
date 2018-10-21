// CPP Program to find sum and mean of elements of a 2-D array
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[100][100],i,j,s=0,m,n=0,r,c;
 cout<<"Enter the dimensions of array in order row,coloumn"<<endl;
 cin>>r>>c;
 cout<<"Enter the elements of array row wise\n";
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   cin>>a[i][j];
   n++;
  }
 }
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   s+=a[i][j];
  }
 }
 cout<<"Sum of the elements of the mattrix :"<<s<<endl;
 cout<<"Mean of the elements :"<<s/n;
 getch();
}