//DONE
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            a.push_back(x);
        }
        for(int i=0;i<n-1;i++){
            if(a[i]==1){
                a[i]++;
                if(a[i]%a[i-1]==0)
                    a[i]++;
            }
            while(a[i+1]%a[i]==0)
                a[i+1]++;
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}