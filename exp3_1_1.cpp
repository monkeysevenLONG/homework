#include<iostream.h>
void main()
{
	int x;
	cout<<"请输入一个整数";
	cin>>x;
    if(x<10)
		cout<<"x小于10"<<endl;
    else
	   if(x<100)
		   cout<<"x大于9小于100"<<endl;
	   else
		   if(x<1000)
			   cout<<"x大于99小于1000"<<endl;
		   else
		       cout<<"x大于10000"<<endl;
}