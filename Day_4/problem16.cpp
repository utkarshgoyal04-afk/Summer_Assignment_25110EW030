#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the lower range : ";
    cin>>a;
    cout<<"Enter the upper range : ";
    cin>>b;
    cout<<"Armstrong series : ";
    for(int i=a;i<=b;i++){
        int temp=i;
        int sum=0;
        int num=i;
        while(temp!=0){
            int rem=temp%10;
            sum+=(rem*rem*rem);
            temp/=10;;
        }
        if(sum==num){
            cout<<num<<" ";
            
        }
    }
    return 0;
}