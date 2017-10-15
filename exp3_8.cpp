#include<iostream.h>
void main()
{
int a,b,c;
cout<<"please input a,b:"<<endl;
cin>>a>>b;
c=a%b;
if(c==0)
 {
  cout<<"a/b="<<a/b<<endl;
 }
else
{
cout<<"a/b="<<a/b<<"?-?-"<<a%b<<endl;
}
}