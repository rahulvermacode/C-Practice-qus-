#include<iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cout<<"Enetr the value of a "<<endl;
    cin>>a;
    cout<<"Enter the value of b "<<endl;
    cin>>b;
    c=a;
    a=b;
    b=c;
    cout<<"The number is swappied"<<endl;
    cout<<"Now a become"<<"a= "<<a<<endl<<"Now b become"<<"b= "<<b;
    return 0;
}