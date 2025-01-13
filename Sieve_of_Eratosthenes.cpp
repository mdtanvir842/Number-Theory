#include<bits/stdc++.h>
using namespace std;

int main() {
    optimize();
    int n=100;
    vector<int>isPrime(n+1);
    for(int i=2;i<=n;i++){
        if(isPrime[i]==0){
            for(int j=i*i;j<=n;j+=i){
                isPrime[j]=1;
            }
        }
    }
    for(int i=1;i<=n;i++){
        if(isPrime[i]==0){
            cout<<i<<endl;
        }
    }
}
