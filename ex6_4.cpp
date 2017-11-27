#include <iostream.h>
void main()
{
 int i,Fib[20]={1,1};
 for (i=2; i<20; i++) 
 {
  Fib[i]=Fib[i-2]+Fib[i-1];
 }
 for (i = 0; i<20; i++) 
 {
	cout<<Fib[i]<<" ";
  if((i+1)%4 ==0)
  {
  	cout<<endl;
  }
 }
 cout<<endl;
}