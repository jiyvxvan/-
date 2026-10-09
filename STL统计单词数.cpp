#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s,text;
    cin>>s;
    cin.ignore();
    getline(cin,text);
    for(char &c:s)c=tolower(c);
    for(char &c:text)c=tolower(c);
    string t=" "+text+" ";
    string p=" "+s+" ";
    int cnt = 0;
    int firstPos = -1;
    size_t pos=t.find(p);
    while(pos!=string::npos)
    {
        cnt++;
        if(firstPos==-1)
        {
            firstPos=pos;
        }
        pos = t.find(p,pos +1);
    }
     if (cnt == 0)
        cout <<firstPos;               
    else
        cout << cnt << " " << firstPos;

   
    return 0;
}
