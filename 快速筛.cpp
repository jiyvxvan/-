#include<bits/stdc++.h>
using namespace std;
bool isP[100000005];
int P[1000000],cnt=0;
void getP(int n)//É¸µ½n 
{
	memset(isP,1,sizeof(isP));
	isP[1]=0;
	for(int i=2;i<=n;i++)
	{
		if(isP[i]) 
			P[++cnt] = i;
			for(int j=1; j<=cnt && i*P[j] <= n; j++)
			{
				isP[i*P[j]]=0;
				if(i%P[j]==0)break;
			}
			
	}
}
int main()
{
	int n,q;
	cin>>n>>q;
	getP(n);
		while(q--)
	{
		int k;
		cin>>k;
		cout<<P[k]<<endl;;
	}
	return 0;
}
