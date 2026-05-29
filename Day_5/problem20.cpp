#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
   int largest=0;
        for(int i=2;i<=num;i++){
            while(num%i==0){
                largest=i;
                num=num/i;
            }
        }
        cout<<"Largest prime factor is : "<<largest;

    
    return 0;
}