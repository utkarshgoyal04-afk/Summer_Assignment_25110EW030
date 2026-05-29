#include<iostream>
using namespace std;
int armstrong(int a){
    int temp=a;
    int sum=0;
    while(a!=0){
    int rem=a%10;
    sum+=(rem*rem*rem);
    a=a/10;
    }
    if(sum==temp){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    if(armstrong(n)){
        cout<<n<<" Is an armstrong number";
    }
    else{
        cout<<n<<" Is not an armstrong number";
    }
    return 0;
}