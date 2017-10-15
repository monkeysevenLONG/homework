 #include<iostream.h>
 
    void main()
    {
        for (int i=1;i<100;i++)
        {
            int s=i*i;
            if (i<10)                                           
            {
                int a=s%10;
                if (i==a)
                {
                    cout<<i<<"是"<<s<<"同构数"<<endl;
                }
            }
            else if(i>=10&&i<100)
            {
                int b=s%100;
                if (i==b)
                {
                    cout<<i<<"是"<<s<<"同构数"<<endl;
                }
            }
        }
    }