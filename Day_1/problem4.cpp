#include<iostream>
using namespace std;
int main(){
    int number,temp,sum=0;
    cout<<"Enter the number : ";
    cin>>number;
while(number>0){
    temp=number%10;
    sum++;
    number/=10;
}
cout<<"The number of digits are : "<<sum;
}