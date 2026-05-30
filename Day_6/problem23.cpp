#include<iostream>
using namespace std;
void bits(int n){
    int binary[32],i=0,bits=0;
    while(n>0){
        binary[i]=n%2;
        n=n/2;
        i++;
    }
    for(int j=0;j<i;j++){
        if(binary[j]==1){
            bits++;
            
        }
    }
    cout<<bits;
}
int main(){
    int number;
    cout<<"Enter the decimal number : ";
    cin>>number;
    cout<<"Number of set bits : ";
    bits(number);
    return 0;
}