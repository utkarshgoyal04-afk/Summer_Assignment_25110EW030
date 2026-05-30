#include<iostream>
using namespace std;
int withoutpow(int x,int n){
    int product=1;
    for(int i=1;i<=n;i++){
        product*=x;
    }
    return product;
}
int main(){
    int num,pow;
    cout<<"Enter the number : ";
    cin>>num;
    cout<<"Enter the power : ";
    cin>>pow;
    cout<<"The "<<num<<" of power "<<pow<<" is : "<<withoutpow(num,pow);
    return 0;
}
