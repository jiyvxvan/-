#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> a;
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	for(vector<int>::iterator it=a.begin();it!=a.end();++it)
	{
		cout<<*it<<endl;
	}
	for(vector<int>::reverse_iterator it=a.rbegin();it!=a.rend();++it)
	{
		cout<<*it<<endl;
	}
	for (auto it = a.begin(); it != a.end(); ++it)
  {
    cout << *it << " "<<endl;
  }
	//rbegin()!=end()
	return 0;
}
