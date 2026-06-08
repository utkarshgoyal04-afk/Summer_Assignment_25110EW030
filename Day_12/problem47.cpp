#include<iostream>
using namespace std;
int fibonacci(int n){
    int first=0,second=1,next;
     for(int i=1;i<=n;i++){
        next=first+second;
        first =second;
        second=next;
     }
     return next-first;
}
int main(){
    int x;
    cout<<"Enter the number : ";
    cin>>x;
    cout<<"Fibonacci : "<<fibonacci(x);
    return 0;
}