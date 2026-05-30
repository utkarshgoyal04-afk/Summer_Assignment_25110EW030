#include<iostream>
#include<cmath>
using namespace std;
int binarytodecimal(int n){
    int binary[32],i=0,sum=0;
    while(n>0){
        binary[i]=n%10;
        n=n/10;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        sum+=binary[j]*pow(2,j);
    }
    return sum;
}
int main(){
    int number;
    cout<<"Enter the binary number : ";
    cin>>number;
    cout<<"The Decimal number is : "<<binarytodecimal(number);
    return 0;
}