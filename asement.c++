#include<iostream>

using namespace std;

int main()
{

    string event_name;
    int name;
    int gytes;
    int n;
    int n1=5;
    float s1=40.00;
    float f1=2000.00;
    float c1=25.70;
    int sum;
    int avg;

    cout<<"-------------event management system---------------";


   cout<<endl;

    cout<<"enter the name of the event :"<<endl;
    cin>>event_name;
        
    cout<<"enter a First name and last name:"<<endl;
    cin>>name;

    cout<<"enter the number of guytes:"<<endl;
    cin>>gytes;


    cout<<"Enter the minuts in the event:"<<endl;
    cin>>n;


    cout<<"-------------Event estimate for:Rakesh Kharva--------------------"<<endl;



    cout<<"number of server:"<<n1<<endl;


    cout<<"The cost for server:"<<s1<<endl;
    cin>>s1;

    cout<<"The cost for Food is:"<<f1<<endl;
    cin>>f1;

    cout<<"avrege cost per person:"<<c1<<endl;
    cin>>c1;

    
sum=s1+f1+c1;

    cout<<"total cost is:"<<sum<<endl;



    cout<<"pleas deposit a 25%  deposit to reserve the event"<<endl;



    avg=sum*0.25;

    cout<<"The deposit Needed is:"<<avg<<endl;






    

    

    
    
}