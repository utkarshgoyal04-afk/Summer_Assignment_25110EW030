#include<iostream>
using namespace std;
int main(){
    int n;
    int rslt=0;
    cout<<"Enter the number : ";
    cin>>n;
    if(n<=1){
        cout<<n<<" Is not prime";
    }
    else{
    for(int i=1;i<=n;i++){
        if(n%i==0){
            rslt++;
        }
    }
    if(rslt>2){
        cout<<n<<" Is not prime";
    }
    else{
        cout<<n<<" Is prime";
    }
}
return 0;
}