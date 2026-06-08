#include<iostream>
using namespace std;
int palindrome(int x){
    int temp,sum=0;
    while(x>0){
        temp=x%10;
        sum=sum*10+temp;
        x=x/10;
    }
    if(sum==x)
    return 0;
    else
    return 1;
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    if(palindrome(n)){
        cout<<"It is palindrome number";
    }
    else{
        cout<<"It is not palindrome number";
    }
    return 0;
}