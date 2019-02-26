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
#define mset(a,b) memset(a,b,sizeof(a))
template <class T> inline T bigmod(T p,T e,T M){ll ret = 1LL;for(; e > 0LL; e >>= 1LL){if(e & 1LL) ret = (ret * p) % M;p = (p * p) % M;}return (T)ret;}
template <class T> inline T modinverse(T a,T M){return bigmod(a,M-2,M);}   // M is prime}
using namespace std;


int main(){
	IOS
	//freopen("output.txt","w",stdout);
    int prefix_sum[10005];
    mset(prefix_sum,0);
    for(int i=1;i<=10000;i++){
        if(i==1){
            prefix_sum[i]=1;
            continue;
        }
        prefix_sum[i]=prefix_sum[i-1]+i;
        //cout<<prefix_sum[i]<<"\n";
    }

    int t;
    cin>>t;
    while(t--){

        ll n;
        cin>>n ;

        if(n<3){
            cout<<"IMPOSSIBLE\n";
            continue;
        }
        if(n&1){
            cout<<n<<" = "<<n/2<<" + "<<n/2+1<<"\n";
            continue;
        }
        ll tempn=n;
        while(tempn%2==0){
            tempn/=2;
        }
        if(tempn==1){
            cout<<"IMPOSSIBLE\n";
            continue;
        }
        ll ans;
        for(int i=2;;i++){
            if((n-prefix_sum[i])%i==0){
                ans=i;
                break;
            }
        }
        int difference = (n-prefix_sum[ans])/ans;
        //cout<<difference<<endl;
        cout<<n<<" = ";
        for(int i=1;i<=ans;i++){
            cout<<i+difference;
            if(i+1<=ans){
                cout<<" + ";
            }
        }
        cout<<"\n";
    }
}
