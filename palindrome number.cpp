#include<iostream>
using namespace std;

int main()
{
    int n ,r,sum=0,t;
    cout<<"eneter a number";
    cin>>n;
    t=n;
    while(n!=0){
        r=n%10;
        sum=sum*10+r;
        n=n/10;
        

    }
    if(t==sum){
        cout<<"it's a plaindrome number";

    }
    else{
        cout<<"it's not a plaindrome number";
    }
    return 0;
}