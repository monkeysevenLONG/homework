#include<iostream.h>
void main()
{
  int n,m;
  m=0;
    cin>>n;
  while(n!=1)
  {
	  if(n%2==0)
		  n=n/2;
	  else
	      n=3*n+1;
	      m++;
  }
  cout<<"¹²ÓÐ:"<<m<<"²½"<<endl;
}
