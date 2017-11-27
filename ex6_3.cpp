#include<iostream.h>
void main()
{
	int i,j,sum=0,a[4][4];
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			cin>>a[i][j];
		
		}
	}
	cout<<"主对角线元素之和："<<sum<<endl;

		for(i=0;i<4;i++)
  for(j=4;j>i;j--)
		{a[i][j]+=1;
		}
		for(i=0;i<4;i++)
  for(j=0;j<i;j--)
		{a[i][j]-=1;
		}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	
	cout<<"\n";
}
