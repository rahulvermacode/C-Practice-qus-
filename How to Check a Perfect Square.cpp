#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int s=sqrt(n);
    if(s*s==n){
        cout<<"number is perfect square"<<endl;
    }
    else{
        cout<<"number is not perfect square"<<endl;
    }
    
    return 0;
}