#include <iostream>
using namespace std;

class counter {
	private :
		int value;
	public :
		void Init_value(void);
		void Inc_value(void);
		void Dec_value(void);
		int get_value(void);
};

void class:: Init_value(void)
{
	value =0;
}

void class:: Inc_value (void)
{
	value++；
}

void class:: Dec_value(void)
{
	value--;
}

int class:: get_value(void)
{
	return value;
}

int main(void)
{
	counter counter1,counter2;
	counter1.Init_value();
	counter2.Init_value();
	
	counter1.Inc_value();
	counter1.Inc_value();
	
	counter2.Dec_value();
	counter2.Dec_value();
	
	cout<<"The value of counter1="<<counter1.getvalue()<<"\n";
	cout<<"The value of counter2="<<counter2.getvalue()<<"\n";
	
	return 0;
}
