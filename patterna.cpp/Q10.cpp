//pattern

#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n+1-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<(char)(64+k);
        }
        cout<<endl;
    }

}
