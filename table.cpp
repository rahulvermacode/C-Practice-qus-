#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the no. which table you want"<<endl;
    cin>>a;
    
    cout<<"The required table of "<<a<<endl;
    for(int i=1;i<=10;i++){
        int b=a*i;
        cout<<a<<" * "<<i<<"= "<<b<<endl;

    }
    return 0;
}