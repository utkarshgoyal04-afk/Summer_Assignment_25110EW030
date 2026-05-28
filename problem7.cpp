#include<iostream>
using namespace std;
int main(){
    int number,temp,product=1;
    cout<<"Enter the number : ";
    cin>>number;
    while(number>0){
        temp=number%10;
        product=product*temp;
        number/=10;
    }
    cout<<"The product of digits are : "<<product;
    return 0;
}