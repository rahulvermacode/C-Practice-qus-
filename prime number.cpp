#include<iostream>
#include<cmath>
using namespace std;


int main()
{
    int n;
    int i;
    cout<<"enter the number: ";
    cin>>n;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"number is not a prime";
        }
    }
    if( i==n){
        cout<<"number is prime";
    }
    

    
    return 0;
}
// has to do some more work