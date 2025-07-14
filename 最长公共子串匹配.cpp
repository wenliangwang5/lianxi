#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char str1[100],str2[100];
int main()
{
    int n;
    scanf("%d",&n);
    while(n--){
        memset(str1,0,sizeof(str1));
        memset(str2,0,sizeof(str2));
        scanf("%s",str1);
        scanf("%s",str2);
        int len1=strlen(str1);
        int len2=strlen(str2);
        int idx;
        for(int i=0;i<len1;i++){
            if(str1[i]!=str2[0])
              continue;
            idx=i;
            if(len1-i<len2)break;
            for(int j=0;j<len2;j++){
                if(str1[i]!=str2[j])
                    break;
                i++;
                if(j=len2-1)
                    printf("%d ",idx);
            }
            i=idx;
        }
    }
    system("pause");
    return 0;
}
