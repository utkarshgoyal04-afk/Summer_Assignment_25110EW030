#include<iostream>
using namespace std;
int perfect(int a){
    int temp=a;
    int sum=0;
    for(int i=1;i<a;i++){
        if(a%i==0){
            sum+=i;
        }
    }
    if(sum==temp){
        return 1;
    }
    else{
        return 0;
    }
}
    int main(){
        int num;
        cout<<"Enter the number : ";
        cin>>num;
        if(perfect(num)){
            cout<<num<<" Is an perfect number";
        }
        else{
            cout<<num<<" Is not an perfect number";
        }
        return 0;
    }
