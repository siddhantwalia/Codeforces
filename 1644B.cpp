#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; 
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        for(int i = 1;i<=n;++i){
            cout<<i;
            for(int j = n;j>0;--j){
                if(i!=j){
                    cout<<" "<<j;
                }
            }
            cout<<endl;
        }
        t--;
    }
}