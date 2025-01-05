//a*b=hcf*lcm
#include<iostream>
using namespace std;

int main()
{
    int lcm,hcf,a,b,r;
    cout<<"enetr two numbers";
    cin>>a>>b;

    while(true){
        lcm=a;
        r=a%b;
        if(r==0){
            break;
        }
        a=a*2;
    }
    hcf=a*b/lcm; 
    cout<<"lcm is "<<lcm<<endl;
    cout<<"hcf is "<<hcf<<endl;






    return 0;
}