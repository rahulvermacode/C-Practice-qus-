#include<iostream>
using namespace std;

int main()

{
    int a;
    int b;
    cout<<"Enter the range btw which you want to print table"<<endl;
    cout<<"starting number"<<endl;
    cin>>a;
    cout<<"Give the end number"<<endl;
    cin>>b;
    
    for( int i=a;i<=b;i++){
        cout<<"The table of "<<i<<endl;
         for(int j=1;j<=10;j++){
            
            cout<<i<<" "<<" * "<<j<<" "<<"="<<i*j<<endl;
            
         }
    }
    return 0;
}