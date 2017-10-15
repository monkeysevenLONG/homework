#include<iostream.h>
void main()
{
	int year,leap,yearsum;
	    year=2000,yearsum=0;
    while(year<=3000)
	{    
	         if(yearsum%10==0)
			  cout<<endl;
		if(year%400==0)
		{  
		  cout<<year<<" ";
		  yearsum++;
		  year++;
		 
		}
		else
			if(year%4==0&&year%100!=0)
			{   
				cout<<year<<" ";
				yearsum++;
		        year++;
			
			}
			else
				year++;
			    
	}
      cout<<"¹²ÓĞ"<<yearsum<<"ÈòÄê"<<endl;

}
