#include<iostream.h>
void main()
{
 int k;
 float r,s,l,pi;
 pi=3.14159;
 s=pi*r*r;
 l=2*pi*r;
 cout<<"please input r he k:"<<endl;
 cin>>r>>k;
 switch(k)
 {
 case 1:
 cout<<"s="<<s<<endl;break;
 case 2:
 cout<<"l="<<l<<endl;break;
 case 3:
 cout<<"s="<<s<<endl;
 cout<<"l="<<l<<endl;break;
 }
}