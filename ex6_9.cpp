#include <iostream.h>

int fun(int m, int a[])
{
        int n = 0;
        int i;

        for (i = 1; i < m; ++i)
        {
                if (i%7==0 ||i%11==0)
                {
                        a[n] = i;
                        n++;
                }
        }
        return n;
}
int main(void)
{   
        int n;
        int count;
        int a[100];
        int i;

       cout<<"please input m:";
       cin>>n;

        count = fun(n, a);
        cout<<"所有整数为:"<<endl;
        for (i = 0; i < count; ++i)
        {     
			cout<<a[i]<<endl; 
        }
		cout<<"个数n为："<<count<<endl; 
        return 0;
}