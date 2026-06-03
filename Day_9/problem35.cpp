#include<iostream>
using namespace std;
void repeatedcharacter(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<char('A'+i)<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int a;
    cout<<"Enter the number of rows : ";
    cin>>a;
    repeatedcharacter(a);
    return 0;
}