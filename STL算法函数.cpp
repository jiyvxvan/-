#include<bits/stdc++.h>
#define int long long
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b)
{
	if(a.second!=b.second)
	return a.second<b.second;
	
	return a.first>b.first;
}

signed main()
{
	/*
	vector<int> a{5,3,8,2,7,8,4,7,3,89,3,1,54};
	sort(a.begin(),a.end(),greater<int>());//加上greater<int>()从大到小 
	
	for(int i=0;i<a.size();i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	*/
	vector<pair<int,int> > arr{{1,9},{2,9},{8,1},{0,0}};
	sort(arr.begin(),arr.end(),cmp);
	for(auto ele:arr)
	cout<<ele.first<<" "<<ele.second<<endl;
	vector<int>  b{0,1,1,3,3,4,5,6,7,8,9};
	int pos=upper_bound(b.begin(),b.end(),22)-b.begin();
	if(pos==b.size())cout<<"NO"<<endl;
	else cout<<pos<<endl;
	cout<<max({1,2,3,4,6,7,34,6,3,6})<<endl;
	
	sort(b.begin(),b.end());
	b.erase(unique(b.begin(),b.end()),b.end());
	for(auto ele:b)
	{
		cout<<ele<<" ";
	}
	cout<<endl;
	
	
	
	
	
	return 0;
	
}
