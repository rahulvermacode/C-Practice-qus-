#include<iostream>
using namespace std;

int main()
{
    cout<<"The ODD numbers btw 1 to 100 "<<endl;
    

    for(int i=1;i<=100;i++){
        
        if(i%2!=0){
            cout<<i<<endl;

        }
        
    }

    cout<<"\n\n\n";
    cout<<"The even numbers are: ";
    for(int i=1;i<=100;i++){
        
        if(i%2==0){
            cout<<i<<endl;
        }
    
    }

    return 0;
}