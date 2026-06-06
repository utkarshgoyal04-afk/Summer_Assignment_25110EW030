#include<iostream>
using namespace std;
int maximum(int a,int b){
    if(a>b)
    return a;
    else 
    return b;
}
int main(){
    int x,y;
    cout<<"Enter the first number : ";
    cin>>x;
    cout<<"Enter the second number : ";
    cin>>y;
    cout<<"Maximum number is : "<<maximum(x,y);
    return 0;
}