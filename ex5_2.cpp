#include<iostream.h>
float fun (int n)
{
int i,s1=0;
float s=0.0;
for(i=1;i<=n;i++)
{
s1=s1+i;
s = s+1.0/s1;
}
return s;

}
void main()
{
int n;
float s;
cout<<"Please enter N:"<<endl;
cin>>n;
s=fun(n);
cout<<"The result is:"<<s<<endl;
} 