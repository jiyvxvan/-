#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s[1005];
    vector<string> v;
    string e;
    int w=1;
    while(cin>>e)
    {
        s[w++]=e;
    }
    w--;
    for(int i=1;i<=w;i++)
    {
       for(int j=0;j<s[i].size();j++)
       {
           if(s[i][j]>='a'&&s[i][j]<='z')s[i][j]-='a'-'A';
           else if(s[i][j]>='A'&&s[i][j]<='Z')s[i][j]-='A'-'a';
       }
        if(s[i][0]>='0'&&s[i][0]<='9')
        {
            reverse(s[i].begin(),s[i].end());
        }
        v.push_back(s[i]);
    }
    while(!v.empty())
    {
        cout<<v.back()<<" ";
        v.pop_back();

    }
    return 0;
}
