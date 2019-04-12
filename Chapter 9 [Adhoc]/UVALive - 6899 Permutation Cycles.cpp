#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    for(int j=0;j<t;j++){
        int n;
        cin>>n;

        int arr[n];

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int cnt=0;
        set<int>st;
        bool vis[n];
        memset(vis,false,sizeof vis);
        int cnt2=0;
        for(int j=0;j<n;j++){
            for(int i=0;i<n;i++){
            if(vis[i]==false){

                if(st.size()==0){
                    vis[i]=true;
                    st.insert(arr[i]);
                    st.insert(i+1);
                    cnt2++;
                    if(cnt2==st.size()){
                        cnt++;
                        cnt2=0;
                        st.clear();
                    }
                }
                else if(st.find(arr[i])!=st.end() || st.find(i+1)!=st.end()){
                    st.insert(arr[i]);
                    st.insert(i+1);
                    cnt2++;
                    vis[i]=true;
                    if(cnt2==st.size()){
                        cnt++;
                        cnt2=0;
                        st.clear();
                    }
                }
            }
        }
        }
        cout<<cnt<<"\n";
    }
}
