#include<bits/stdc++.h>
using namespace std;
double dp[105][105][105];
double dp2[105][105][105];
double ps(int r,int s,int p){
    if(r==0)return 1.0;
    if(s==0)return 0.0;
    if(p==0)return 0.0;
    if(dp2[r][s][p] > -0.9)return dp2[r][s][p];
    double total = (1.0*r*p + 1.0*p*s + 1.0*r*s);
    return dp2[r][s][p] = ps(r-1,s,p)*((r*p)/total)+ps(r,s,p-1)*((p*s)/total)+ps(r,s-1,p)*((r*s)/total);
}
double pr(int r,int s,int p){   
    if(r==0)return 0.0;
    if(s==0)return 0.0;
    if(p==0)return 1.0;
    if(dp[r][s][p] > -0.9)return dp[r][s][p];
    double total = (1.0*r*p + 1.0*p*s + 1.0*r*s);
    return dp[r][s][p] = pr(r-1,s,p)*((r*p)/total)+pr(r,s,p-1)*((p*s)/total)+pr(r,s-1,p)*((r*s)/total);
}
int main(){
    // int t;
    // cin>>t;
    // while(t--){
        memset(dp,-1,sizeof dp);
        memset(dp2,-1,sizeof dp2);
        int rock,paper,scissor;
        cin>>rock>>scissor>>paper;
        double probRock = pr(rock,scissor,paper);
        double probScissor = ps(rock,scissor,paper);
        double probPaper = 1.0 - (probRock + probScissor);
        cout<<fixed << setprecision(9)
     <<probRock<< " " <<probScissor<< " " << probPaper;
    // }
}