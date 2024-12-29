#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        a %= b;
        swap(a, b);
    }
    return a;
}
int main(){
    int t ;
    cin>>t;
    while(t--){
        long long x, y;
        cin>>x>>y;
        long long ans  = gcd(x,y);
        long long lcm  = (x/ans)*y;
        cout<<lcm<<endl;
    }
}