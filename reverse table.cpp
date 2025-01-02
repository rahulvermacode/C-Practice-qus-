#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the no. which  reverse table you want:"<<endl;
    cin>>a;
    
    cout<<"The required table of "<<a<<endl;
    for(int i=10;i>=1;i--){
        int b=a*i;
        cout<<a<<" * "<<i<<"= "<<b<<endl;


    }
    cout<<"End of the table";
    return 0;
}