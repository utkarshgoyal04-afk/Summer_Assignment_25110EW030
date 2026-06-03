#include<iostream>
using namespace std;
void hollowsquare(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 or i==n or j==1 or j==n){
                cout<<"* ";
            }
                else{
                cout<<"  ";
                }
        }
        cout<<endl;
    }
}
int main(){
    int a;
    cout<<"Enter the number of rows : ";
    cin>>a;
    hollowsquare(a);
    return 0;
}