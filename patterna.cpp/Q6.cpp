#include<iostream>
using namespace std;
int main(){
    int i,j,n,m;
    cin>>m>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(i==1||i==n||j==1||j==m) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}