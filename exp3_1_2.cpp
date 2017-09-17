#include<iostream.h>
void main()
{
	int x,b;
	b=0;
	cout<<"请输入一个小于10000正整数"<<endl;
	cin>>x;
	
	

	while(x!=0)
	{
		if(b<4)
		{
		b++;
		x=x/10;
		}
		else
			cout<<"输入有误!!!";
	}
	switch(b)
	{
	  case 0:cout<<"x等于0";break;
	  case 1:cout<<"x小于10";break;
      case 2:cout<<"x大于9小于100";break;
	  case 3:cout<<"x大于99小于1000";break;
	  case 4:cout<<"x大于999";break;
	}
}
