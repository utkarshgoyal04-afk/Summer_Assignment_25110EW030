#include<iostream>
using namespace std;
void repeatednumber(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int a;
    cout<<"Enter the number of rows : ";
    cin>>a;
    repeatednumber(a);
    return 0;
}