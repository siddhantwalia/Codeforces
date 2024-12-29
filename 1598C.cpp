#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> ans;
        long long total= 0;
        for(int i = 0;i<n;i++){
            int a;
            cin>>a;
            total+=a;
            ans.push_back(a);
        }
        if ((2 * total) % n != 0) {
            cout<<0<<endl;
            continue;
        }
        unordered_map<long long,int> map;
        long long  mean =( 2*total)/n;
        long long val = 0;
        for(int i = 0;i<n;i++){
            long long con = mean - ans[i];
            if(map.count(con)){
                val+=map[con];
            }
            map[ans[i]]++;
        }
                cout<<val<<endl;
    }
    return 0;
}