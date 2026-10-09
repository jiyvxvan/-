#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	long long a,b;
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		if(i%2==0){//????
			continue;
		}
		int w=i,s=0;
		while(w!=0){//????????
			s=s*10+w%10;
			w/=10;
		}
		if(s!=i){
			continue;
		}
		int f=0;//???????
		for(int j=2;j*j<=i;j++){
			if(i%j==0){
				f=1;
				break;
			}
		}
		if(f==0){
			cout<<i<<endl;
		}
	}
	
}
