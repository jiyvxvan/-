#include<bits/stdc++.h>
using namespace std;
int a,n;
long long fastpow(int a,int n)
{
	if(n==0)return 1;
	if(n%2==0)
	return fastpow(a,n/2)*fastpow(a,n/2);
	else
	return fastpow(a,n/2)*fastpow(a,n/2)*a;
	
}
int main()
{
	cin>>a>>n;
	cout<<fastpow(a,n);
	return 0;
}
