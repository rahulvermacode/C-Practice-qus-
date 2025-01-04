#include<iostream>
using namespace std;

int main()
{
    int n,r,reverse=0;
    
    cout<<"enetr the number"<<endl;

    cin>>n;
    while(n!=0){
        r=n%10;
        //nice:if we have to add a zero in every digit 
        //than we wiil multiplay by 100
        reverse=reverse*10+r;
        n=n/10;
        
    }
    cout<<"reverse is "<<reverse;
    return 0;
}