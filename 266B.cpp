#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int t;
    cin>>t;
    vector<char> que(n);
    for(int i = 0;i<n;i++){
        cin>>que[i];
    }
    bool swaped = false;
    for(int i = 0;i<t;i++){
        for(int j = 0;j<n-1;j++){
            if(que[j]=='B' and que[j+1]=='G'){
                swaped =true;
                swap(que[j],que[j+1]);
                j++;
            }
        }
        if(!swaped){
            break;
        }
    }
    for(int i =0;i<n;i++){
        cout<<que[i];
    }
}