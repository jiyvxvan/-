#include<bits/stdc++.h>
using namespace std;
void hanoi(int n,char F,char A,char T)
{
	if(n==1)
	{
	printf("move %d from %c to %c\n",n,F,T);
	return;
    }
    hanoi(n-1,F,T,A);
    printf("move %d from %c to %c\n",n,F,T);
    hanoi(n-1,A,F,T);
}


int main()
{
	int n;
	cin>>n;
	char F='F';
	char A='A';
	char T='T';
	hanoi(n,F,A,T);
	
	
 } 
