#include <iostream.h>
#include <stdio.h>
void main()
{
	char a[100],b[100],c[100],*p=a,*q=b,*t=c;
	int n;
	cout<<"input string a:"<<endl;
	gets(a);
	cout<<"insert position:"<<endl;
	cin>>n;
	cout<<"input string b:"<<endl;
	gets(b);
	p=p+n;
	for(;*p!='\0';)
	{
		*t=*p;
		p++;
		t++;
	}
	*t='\0';
	p=a+n;
	for(;*q!='\0';)
	{
		*p=*q;
		p++;
		q++;
	}
	*p='\0';
	t=c;
	for(;*t!='\0';)
	{
		*p=*t;
		p++;
		t++;
	}
	*p='\0';
	cout<<"now the string a is:"<<endl;
	puts(a);
}