#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+5;
int n;
struct node{
    int h,l,r;
    bool operator<(const node&n)const{
        if(h!=n.h)return h<n.h;
        return r<n.r;
    }
}ns[N];
int ans;
priority_queue<node>pq;
int change(int x){
    return sqrtl((x/2)+1);
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>ns[i].h;
        ns[i].l=ns[i].r=i;
        pq.push(ns[i]);
    }
    while(pq.top().h!=1){
        int maxh=pq.top().h,maxl=pq.top().l,maxr=pq.top().r;
        pq.pop();
        while(pq.top().h==maxh&&pq.top().r==maxl-1){
            maxl=pq.top().l;
            pq.pop();
        }
        int af=change(maxh);
        ans++;
        pq.push({af,maxl,maxr});
    }
    cout<<ans<<"\n";
    return 0;
}
