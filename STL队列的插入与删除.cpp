#include<bits/stdc++.h>
using namespace std;
list<int> l;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int n;
    cin>>n;
    l.push_back(1);
    int k,p;
    vector<list<int>::iterator> pos(n + 1);
    pos[1]=l.begin();
   for (int i = 2; i <= n; i++)
    {
       cin>>k>>p;
       auto it=pos[k];
       if (p==0)
        {
            pos[i]=l.insert(it,i);
        }
        else
        {
            it++;           
            pos[i]=l.insert(it,i);
        }
    }
    int m;
    cin>>m;
    vector<bool> removed(n+1,false);
    while(m--)
    {
      cin>>k;
        if(!removed[k])
        {
            l.erase(pos[k]);
            removed[k]=true;
        }
    }
    for(int q:l)
    {
        cout<<q<<" ";
    }
    return 0;
}
