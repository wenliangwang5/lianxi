#include<iostream>
#include<algorithm>
#include<queue>
#include<map>
#include<set>
#include<cstring>
#include<cmath>
#include<stack>
#include<string>
#include<bitset>
#include<unordered_map>
#include<unordered_set>
#define ll long long
#define endl '\n'
#define deb(x) cout<<"#"<<x<<" "
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define pb push_back
#define inf 0x3f3f3f3f
#define x first
#define y second
typedef pair<int,int> PII;
const int N=200010,M=1010,nod=1e9+7;
int zmax,zmin;//正数最大 最小值 
int fmaxo,fmino;//负数最大最小值 
int c;//常数变量 
string s;
map<int,int> p;
//bool cmp(PII a,PII b){
//	return a.first<b.first;
//}
void solve(int t,int i){//t 是开始 i是结尾 
	int num,spa,flag;
	
	if(s[t]=='+'||s[t]=='-'){//首先判断是否有符号 进行标记 无符号默认为正 
	        if(s[t]=='-') flag=0;
			else flag=1;
			
			t++;	
	}
	else {
		flag=1;
	}
	
	
	int et=t;
	while(s[et]>='0'&&s[et]<='9') et++;//首位数字判断 /面数判断 
	if(t==et) num=1;// 开始等于截至位置就默认首位数字为1 
	else { //否则进行数字提取（面数） 
		num=stoi(s.substr(t,et-t));//转换为int 
	}
	if(et>i) {//是全数字的话 常数增加 
		if(flag) c+=num;
		else c-=num;
		return ;
	}
	else {//非全数字的话 面数提取 
		spa=stoi(s.substr(et+1,i-et));
		if(flag){//为正为负时 最大最小值提取 
			zmax+=num*spa;
			zmin+=num;
		}
		else{
			fmaxo-=num;
			fmino-=num*spa;
		}
	}
	p[spa]+=num;
	//cout<<spa<<" "<<num<<endl;
}
signed main()
{
   cin>>s;
   int t=0;
   for(int i=0;i<s.size();i++)
   {
   	 if(s[i]=='+'||s[i]=='-'){//当判断到符号时截取处理前一部分 
   	 	solve(t,i-1);
   	 	t=i;
		}
   }
   solve(t,s.size()-1);//最后一部分未处理 再处理下 
   //sort(p.begin(),p.end(),cmp);
   for(auto u:p){//面数 数量输出 map默认从小到大 
   	cout<<u.first<<" "<<u.second<<endl;
   }
  cout<<zmin+fmino+c<<" "<<zmax+fmaxo+c<<endl;
  //正数最小值加负数最小值为最小 正数最大值加负数最大值为最大 
  return 0;
}


