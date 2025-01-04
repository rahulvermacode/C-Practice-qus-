#include<iostream>
using namespace std;

int main()
{
    int n1,n2,r,t;
    cout<<"enter the two number"<<endl;
    cin>>n1>>n2;


    if(n1>n2){
        r=n1%n2;
        t=n2%r;
    
    }
    else{
        r=n2%n1;
        t=n1%r;}
    if(t==0){
        cout<<"The HCF of these number is "<<r<<endl;
    }
    else{
        cout<<"there is no HCF for these numbers";
    }


    return 0;
}