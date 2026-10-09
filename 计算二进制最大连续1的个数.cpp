#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;3
	int d=0;
	int maxn=0;
	while(n)
	{
		if(n&1)
		{
			d++;
			maxn=max(d,maxn);
			
		}
		else
		{
			d=0;
		}
		n>>=1;
	}
	cout<<maxn;
	return 0;
}
