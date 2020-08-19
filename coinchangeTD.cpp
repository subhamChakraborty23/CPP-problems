#include<iostream>
#include<climits>
using namespace std;
//Top down approach
int minCoinsTD(int n,int coins[],int T,int dp[]){
    if(n==0){
        return 0;
    }
    if(dp[n]!=0){
        return dp[n];
    }
    int ans=INT_MAX;
    for(int i=0;i<T;i++){
        if(n-coins[i]>=0){
        int subprob=minCoinsTD(n-coins[i],coins,T,dp);
        ans =__min(ans,subprob+1);

        }
    }
    dp[n]=ans;
    return dp[n];
}
// min coins bottom up
int minCoinsBU(int N,int coins[],int T){
    int dp[100]={0};
    //iterate over all space from 1 .. N
    for(int n=1;n<=N;n++){
        dp[n]=INT_MAX;
        for(int t=0;t<T;t++){
            if(n-coins[t]>=0){
            int subprob = dp[n-coins[t]];
            dp[n]=__min(dp[n],subprob+1);
            }
        }
    }
    return dp[N];
}

int main(){
    int N=20;
    int coins[]={1,7,10};
    int dp[100]={0};
    int T =sizeof(coins)/sizeof(int);
    cout<<minCoinsBU(N,coins,T)<<endl;
    return 0;
    }