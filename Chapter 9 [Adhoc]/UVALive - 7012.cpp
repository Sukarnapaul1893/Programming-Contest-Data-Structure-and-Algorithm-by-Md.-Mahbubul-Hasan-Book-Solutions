#include<bits/stdc++.h>
#define pb push_back
#define ll long long
using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    while(true){
        
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==0 && b==0 && c==0 && d==0)break;
        cout<<c-b<<" "<<d-a<<"\n";
    }
}
