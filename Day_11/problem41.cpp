#include<iostream>
using namespace std;
int sumofnumber(int a,int b){
    int sum=0;
    sum=a+b;
    return sum;
}
int main(){
    int x,y;
    cout<<"Enter the first number : ";
    cin>>x;
    cout<<"Enter the second number : ";
    cin>>y;
    cout<<"Sum of x and y is : "<<sumofnumber(x,y);
    return 0;
}