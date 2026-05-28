#include<iostream>
using namespace std;
int main(){
    int number,factorial=1;
    cout<<"The value of number is :";
    cin>>number;
    for(int i=1;i<=number;i++){
        factorial=factorial*i;
    }
    cout<<"Factorial of "<< number <<" is "<< factorial;
    return 0;
}
