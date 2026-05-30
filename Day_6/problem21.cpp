#include<iostream>
using namespace std;
void decimaltobinary(int n){
    int binary[32],i=0;
    while(n>0){
        binary[i]=n%2;
        n=n/2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        cout<<binary[j];
    }
}
int main(){
    int number;
    cout<<"Enter the decimal number : ";
    cin>>number;
    cout<<"binary Equivalent : ";
    decimaltobinary(number);
    return 0;
}