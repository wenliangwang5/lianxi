#include <iostream>
using namespace std;

int main() {
  int n,x,ans = 0;
  cin>>n;
  for (int i=1; i<=n; i++)
    cin>>x, ans |= x;
    //统计所有数中哪些位置上没有出现1 
	//ans取反为1的就是没有出现1的位置 ans+1就会把最小的没有出现的1的位置补上
	//那么~ans和-~ ans就是我们要找的最小的都没有出现1的那个位置的十进制表示的数 
  cout<<(~ans&-~ans)<<'\n';
  
  return 0;
}
