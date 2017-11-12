#include <iostream.h>
float fun (double h)
{
long t;
t=(h*1000+5)/10;
return (float) t/100;
}
main()
{
float a;
cout<<"Enter a: ";
cin>>a;
cout<<"The original data is : ";
cout<<a<<endl;
cout<<"The result:"<<fun(a)<<endl;
return 0;
}
