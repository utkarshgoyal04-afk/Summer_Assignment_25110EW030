#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    cout<<"Factors of "<<num<<" are : ";
        int temp=num;
        for(int i=1;i<=temp;i++){
            if(temp%i==0){
                cout<<i<<" ";
            }
        }

    
    return 0;
}