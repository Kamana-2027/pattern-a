//patterns

#include<iostream>
using namespace std;
int main(){
    int i,j,n,k;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=1;i<=n-1;i++){
        for(k=1;k<=n+1-i-1;k++){
            cout<<"*";
        }
            cout<<endl;
    }
}
