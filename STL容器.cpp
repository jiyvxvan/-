 #include<bits/stdc++.h>
using namespace std;
int main()
{
	//==============================vector===================================
	vector<int> a;
	a.push_back(1);
	a.push_back(2);
	a.pop_back();
	int at=a.size();
	cout<<a[0]<<endl;
	cout<<at<<endl;
	cout<<a.back()<<endl;//输出最后一个元素； 
	
	printf("以下是栈；\n");
	//=================stack=================================================
	stack<double> b;
	b.push(1.0);
	b.push(2.0);
	cout<<b.size()<<endl;
	cout<<b.top()<<endl;                    //不能访问内部元素 
	cout<<b.empty()<<endl;
	b.pop();
	cout<<b.top()<<endl;
	printf("以下是队列：\n"); 
	//===================queue=================================================
	queue<int> que;
	for(int i=0;i<5;i++)
	{
		que.push(i);
	}
	que.pop();//去掉队首，第一个 
	cout<<que.front()<<endl;//取队首，第一个
	                                                      //不能访问内部元素 
	cout<<que.back()<<endl;//取队尾，第二个； 
	cout<<que.size()<<endl;
	cout<<que.empty()<<endl;
	printf("以下是优先队列：\n");
	//================================ priority_queue=========================
	priority_queue<int> pque1;//储存int的大顶堆（取最大值） 
    pque1.push(1);
    pque1.push(2);
    pque1.push(3100);
    pque1.push(4);
    cout<<pque1.top()<<endl;//top是最大的数 
    pque1.pop();
    cout<<pque1.top()<<endl;
	 
	priority_queue<int,vector<int>,greater<int> > pque2;//储存int的小顶堆/取最小值； 
	 
	pque2.push(1);
    pque2.push(2);
    pque2.push(3100);
    pque2.push(4);
    cout<<pque2.top()<<endl;//top是最小的数           //不能访问内部元素 ，所有元素不能写 
    pque2.pop();
    cout<<pque2.top()<<endl;
    printf("以下是双端队列：\n");
	//===================================    deque    =========================
	

    std::deque<int> dq = {1, 2, 3};
    dq[0];        
    dq.at(0);     
    dq.front();   
    dq.back();    
    dq.push_back(4);  
    dq.push_front(0);   
    dq.pop_back();      
    dq.pop_front();     
    dq.insert(dq.begin(), 99);
    dq.erase(dq.begin());
    //dq.clear();
    //dq.empty();
    //dq.size();
    dq.resize(10);
    for(int dq1:dq)cout<<dq1<<" ";
    cout<<endl;
    
	 
	
	printf("以下是集合：\n"); 
	//=======================================set============================= 
	
	//提供对数时间的插入删除，底层原理是红黑树； 
	//会将元素从小到大排好序  
    set<int> st1;
	 set<int, greater<int> >st2;//从大到小 
	 st1.insert(1);
	 st1.insert(2);
	 st1.insert(2);
	 st1.insert(0);
	 st1.erase(2);//擦除元素 
	 if(st1.find(1)!=st1.end())cout<<"yes"<<endl;
	 if(st1.count(1))cout<<"yes"<<endl;
	 printf("以下是映射：\n");
	 //===================================    map    ==========================
	 //键的顺序 从小到大 
	map<int,int> mp1; //键从小到大 
    mp1[2]=1;
    mp1[3]=1;
    mp1[3]=1;
    mp1[3]=1;
    mp1[4]=1;
    cout<<mp1[2]<<endl;
    //mp1.erase(2);
    cout<<mp1.count(5)<<endl;//查看元素—键是否出现 
    cout<<mp1.size()<<endl;//大小是赋值的值的个数； 
    map<string,int> mp2;
    vector<string> word;
    word.push_back("awa");
    word.push_back("awa");
    word.push_back("awa");
    word.push_back("awa");
    word.push_back("bwb");
    word.push_back("bwb");
    for(int i=0;i<word.size();i++)
    {
    	mp2[word[i]]++;
	}
    cout<<mp2["awa"]<<" "<<mp2["bwb"]<<endl;
	printf("以下是字符串：\n");
	//==================================    string ====================================
	
	string s1="jiyvxvannb";
	
	string s2="jiyvxvannb";
	if(s1==s2)
	{
		cout<<"就是nb"<<endl;
	}
	cout<<s1+s2<<endl;
	s2+='a';
	cout<<s1.substr(3)<<endl;//从下标为3的字符开始输出
	cout<<s1.substr(3,3)<<endl;//将下标为3到下标为6的字符输出 
	string s3=s1+s2; 
	cout<<s1<<" "<<s2<<" "<<s3<<endl;
	if(s1.find("ji")!=string::npos)//find会返回其实字符的下标 
	{
		cout<<"yes"<<endl;
	}

	printf("一下为二元组：\n");
	//====================================     pair     ==================================
	pair<int,int> pa=make_pair(1,2);
	pair<int,int> pb=make_pair(1,2);
	cout<<pa.first<<" "<<pa.second<<endl;
	if(pa==pb)
	{
		cout<<"yes"<<endl;
	}
	pair<pair<char,int>,int> p3;//三元组
	 
	printf("以下是链表：\n");
	//=======================================    list      ==============================
	list<int> lst={1,2,3};
	lst.push_back(4);
	lst.push_front(0);
	auto it=lst.begin();
	it=lst.erase(it);//删除it对应的元素 并且指向下一个元素 
	advance(it,2);      //迭代器移动到第2个元素； 
	lst.insert(it,99);//在第二个元素后插入99； 
	for(int lst1:lst)cout<<lst1<<" ";
	cout<<endl;
	
	
	
	
	
	
	
	return 0;
}
