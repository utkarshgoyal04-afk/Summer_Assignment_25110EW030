#include<iostream>
using namespace std;
void charactertriangle(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<char('A'+j)<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int a;
    cout<<"Enter the number of rows : ";
    cin>>a;
    charactertriangle(a);
    return 0;
}