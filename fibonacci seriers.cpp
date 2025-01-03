#include<iostream>
using namespace std;

int main()
{
    int n1=0;
    int n2=1;
    int n3=n1+n2;
    int k;
    cout<<"enter the  two numbers "<<endl;
    cin>>n1>>n2;
    cout<<"enter the size of the f-s"<<endl;
    cin>>k;
    cout<<"the required fibonacci series"<<endl;
    for(int i=0;i<=k;i++){
        n3=n1+n2;
        n1=n2;
        n2=n3;
        
        cout<<n3<<endl;
    }
    return 0;
}