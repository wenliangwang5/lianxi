#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
  int N;
  long long sum=0;
  scanf("%d",&N);//第一次输入
  int arr[N];
  for(int i=0;i<N;i++){
    scanf("%d",&arr[i]);//第二次输入
  }
  long i;
  for(i=0;i<N;i++){
    sum+=arr[i]*(i+1)*(N-i);//这里不是i*（N-i+1）是因为我i是从0开始，如果从1开始就是。
  }
  printf("%lld",sum);
  return 0;
}
