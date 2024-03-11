//pattern

#include<iostream>
using namespace std;
int main(){
    int i,j,k,n;
    cin>>n;
    for(i=1;i<=n+1;i++){
        for(j=1;j<=i;j++){
            if(i%2!=0) cout<<j;
            else cout<<(char)(64+j);

        }
        cout<<endl;
    }
}