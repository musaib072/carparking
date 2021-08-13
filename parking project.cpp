#include<iostream>
using namespace std;
int main()
{
    int c=0;
    int r=0;
    int b=0;
    int u=0;
    int amount=0,count=0;


    // menu
    while(true)
    {


    cout<<"press 1 for rickshaw"<<endl;
    cout<<"press 2 for car"<<endl;
    cout<<"press 3 for bus"<<endl;
    cout<<"press 4 to show record"<<endl;
    cout<<"press 5 for deleting record"<<endl;
    cin>>u;



    if (u==1)

    {
        if (count<=50)
        {


        amount=amount + 100;
        count=count+1;
        r++;
    }
    else
        cout<<"no more cars parking is full"<<endl;
    }
    else if (u==2)
    {
         if (count<=50){
        amount=amount+200 ;
        count=count+1;
        c++;
    }
      else
        cout<<"no more cars parking is full"<<endl; }
    else if(u==3)
    {
                 if (count<=50){

     amount=amount + 300;
     count = count +1 ;
     b++;
    }
      else
        cout<<"no more cars parking is full"<<endl; }

    else if (u==4)
    {

      cout<<"********************"<<endl;
      cout<<"the total amount="<<amount<<endl;
      cout<<"the total number of vechile parked="<<count<<endl;
      cout<<"total no of rickshaw="<<r<<endl;
      cout<<"total no of cars="<<c<<endl;
      cout<<"total no of bus="<<b<<endl;
       cout<<"********************"<<endl;
            }

        else if(u==5)
        {
            amount=0;
        count=0;
         cout<<"********************"<<endl;
         cout<<"record deleted"<<endl;
    }
    else { cout<<"invalid number"<<endl;
    }
    }
    return 0;
}





