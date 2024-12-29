// Codeforces 69A
// Time Complexity : O(n);
// Space Complexity : O(1); 
#include<bits/stdc++.h>
using namespace std;

int main(){
    int x=0,y=0,z=0;
    int n;
    cin>>n;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        x+=a;
        y+=b;
        z+=c;
    }
    if(x==0 and y==0 and z==0){
        cout<<"YES";
        return 0;
    }
    cout<<"NO";
    return 0;
}