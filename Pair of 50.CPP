#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[10],i,j,n=0;
 cout<<"Enter random numbers\n";
 for(i=0;i<10;i++)
 cin>>a[i];
 for(i=0;i<10;i++)
 {
  for(j=0;j<10;j++)
  {
   if(a[i]+a[j]>50)
   {
    n++;
    cout<<"Pair "<<n<<endl;
    cout<<a[i]<<","<<a[j];
   }
  }
 }
 getch();
}