#include<iostream>
using namespace std;
int main(){
    int num1,num2,rslt;
cout<<"Enter the upper range : ";
cin>>num1;
cout<<"Enter the lower range : ";
cin>>num2;
if(num1==1){
    num1+=1;
}
    for(int i=num1;i<=num2;i++){
        rslt=0;
        for(int j=num1;j<i;j++){
            if(i%j==0){
                rslt=1;
                break;
            }
        }
        if(rslt==0){
            cout<<i<<endl;
        }
    }
return 0;
}