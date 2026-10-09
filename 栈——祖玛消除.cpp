#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k;
	string s;
	cin>>k>>s;
	 vector<pair<char,int>> st;
	 for(char c:s)
	 {
	 	if(!st.empty()&&st.back().first==c)
	 	{
	 		st.back().second++;
	 		if(st.back().second==k)
	 		{
	 			st.pop_back();
			 }
		 }
		 else
		 {
		 	st.push_back({c,1});
		 }
	 }
	 string ans;
	 for(auto &q:st)
	 {
	 	ans.append(q.second,q.first);//连接上（q.second）个(q.first); 
	 }
	 cout<<ans;
	return 0;
}
