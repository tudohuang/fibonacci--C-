#include<bits/stdc++.h>

using namespace std;
int dp[10000];

	
int fb(int n){
	if(dp[n]) return dp[n];
    return dp[n]=fb(n-1)+fb(n-2);
}
int main(){
	int n;
    cin>>n;
    memset(dp,0,sizeof(dp));
    dp[1]=1,dp[2]=1;
    cout<<fb(n)<<'\n';
}
