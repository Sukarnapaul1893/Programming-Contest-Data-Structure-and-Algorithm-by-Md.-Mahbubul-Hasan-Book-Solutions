#pragma warning(disable:4786)
#pragma warning(disable:4996)
#include<bits/stdc++.h>
#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)
#define pii pair<int,int>
#define pll pair<long long ,long long>
#define pli pair<long long , int>
#define pil pair<int ,long long>
#define pi acos(-1)
#define pb push_back
#define mkp make_pair
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MAX 300005
#define INF 0x3f3f3f3f
template <class T> inline T bigmod(T p,T e,T M){ll ret = 1LL;for(; e > 0LL; e >>= 1LL){if(e & 1LL) ret = (ret * p) % M;p = (p * p) % M;}return (T)ret;}
template <class T> inline T modinverse(T a,T M){return bigmod(a,M-2,M);}   // M is prime}
using namespace std;


int main(){
	IOS
	//freopen("output.txt","w",stdout);
    int n,m;
    while(cin>>n>>m){

        ll a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i]>>b[i];
        }
        ll x[m],y[m],t[m] ;
        for(int j=0;j<m;j++){
            cin>>x[j]>>y[j]>>t[j];
            ll cur[n];
            for(int i=0;i<n;i++){
                if(abs(b[i]-a[i])==0){
                    cur[i]=a[i];
                    continue;
                }
                ll div = t[j]/abs(b[i]-a[i]);
                ll rem = t[j]%abs(b[i]-a[i]);
                if(div&1LL){

                    ll position;
                    if(b[i]<a[i]){
                        position=b[i]+rem;
                    }
                    else{
                        position = b[i]-rem;
                    }
                    cur[i]=position;
                }
                else{
                    ll position;
                    if(b[i]<a[i]){
                        position=a[i]-rem;
                    }
                    else{
                        position = a[i]+rem;
                    }
                    cur[i]=position;
                }
            }
            int count=0;
            for(int i=0;i<n;i++){
                if(cur[i]>=x[j] && cur[i]<=y[j]){
                    count++;
                }
            }
            cout<<count<<endl;
        }
    }
}
