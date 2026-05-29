#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int rslt=n,temp,product,sum=0;
    while(n!=0){
        temp=n%10;
        product=1;
        for(int i=1;i<=temp;i++){
            product=product*i;
        }
        n=n/10;
        sum=sum+product;
    }
    if(sum==rslt){
        cout<<rslt<<" is an strong number";
    }
    else{
        cout<<rslt<<" is not an strong number";
    }
    return 0;
}