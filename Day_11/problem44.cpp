#include<iostream>
using namespace std;
int factorial(int x){
    int fact=1;
    if(x<=1)
    return fact=1;
    else
    for(int i=1;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n;
    cout<<"Enter the  number : ";
    cin>>n;
    cout<<"The factorial of "<<n<<" is "<<factorial(n);
    return 0;
}