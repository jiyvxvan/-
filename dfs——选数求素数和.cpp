#include<bits/stdc++.h>
using namespace std;
int n,k,a[25],c[25],ans;
vector<int> b;
bool check(int num){
    if(num<2)return false;
    for(int i=2;i*i<=num;i++)
    if(num%i==0)return false;
    return true;}
void dfs(int x){
    if(x>k){
        int sum=0;
        for(int i=1;i<=k;i++)sum+=a[c[i]];
        b.push_back(sum);
        return;}
    for(int i=c[x-1]+1;i<=n;i++){
        c[x]=i;
        dfs(x+1);}}
int main()
{   cin>>n>>k;
    for(int i=1;i<=n;i++)cin>>a[i];
    dfs(1);
    for(int i=0;i<b.size();i++)
    if(check(b[i]))ans++;
    cout<<ans;
    return 0;}
