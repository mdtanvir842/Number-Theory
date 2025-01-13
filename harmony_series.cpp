#include<bits/stdc++.h>
using namespace std;
int main()
{
    int lim=1e6+123;
    vector<int>v(lim);
    for(int i=1;i<=lim;i++){
        for(int j=i;j<=lim;j+=i){
            v[j]++;
        }
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<v[n]<<endl;
    }
    
}
