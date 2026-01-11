#include<bits/stdc++.h>
using namespace std;

void answers(long long n,long long l,long long r){
  vector<long long>ans;
        bool p=0;
        for(long long i=1;i<=n;i++){
            long long k=((l+i-1)/i)*i;
            if(k>r){
                cout<<"NO"<<endl;
                p=1;
                break;
            }
            ans.push_back(k);
        }
        if(p!=1){
            cout<<"YES"<<endl;
            for(long long i=0;i<n;i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
}

int main(){
  long long t;
  cin>>t;
  while(t--){
  long long n,l,r;
  cin>>n>>l>>r;
  answers(n,l,r);
  }
  return 0;
}
