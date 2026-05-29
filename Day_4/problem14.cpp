#include<iostream>
using namespace std;
int main(){
    int n,first=0,second=1,next;
    cout<<"Enter the term : ";
    cin>>n;
    cout<<"Fibonacci term "<<n<<" is ";
    for(int i=1;i<=n;i++){
        next=first+second;
        first =second;
        second=next;
    }
    cout<< next-first <<" ";
    return 0;

}