#include<bits/stdc++.h>
using namespace std;
int n,m;

int main()
{
    cin>>n>>m;
    int ans=0;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
   
    do{
        ans++;
        if(ans==m+1)
        {
            for(int x:a)cout<<x<<" ";

            break;
        }   
        }while (next_permutation(a.begin(),a.end()));
    
    return 0;
}
