#include<iostream>
using namespace std;

int main()
{
    int n1,n2,r,LCM;

    cout<<"Enter the nmber";

    cin>>n1>>n2;

    while(true){

        LCM=n1;
        r=n1%n2;
        if(r==0){
            break;
        }
        n1=n1*2;
    }
    cout<<"lcm is "<<LCM;

    

    return 0;
}