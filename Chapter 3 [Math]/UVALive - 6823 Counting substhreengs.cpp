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
    string s;
    while(cin>>s){
        long long ans=0;
        int dp[s.length()];
        for(int i=0;i<s.length();i++){
            if(s[i]<'0' || s[i]>'9'){
                dp[i]=-1;
                continue;
            }
            if(i==0 || dp[i-1]==-1){
                dp[i]=s[i]-'0';
                continue;
            }
            dp[i]=dp[i-1]+(s[i]-'0');
        }
        int rem[3];
        memset(rem,0,sizeof rem);
        for(int i=0;i<s.length();i++){
            if(dp[i]==-1){
                rem[0]=0;
                rem[1]=0;
                rem[2]=0;
                continue;
            }
            int r=dp[i]%3;
            rem[r]++;
            ans+=rem[r]-1;
            if(r==0)ans++;
        }
        cout<<ans<<endl;
    }

}
