#include<cstdio>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int sum=a+b;
    int ans[31],num=0;//每一位存在数组ans里
    do{
        ans[num++]=sum%c;
        sum/=c;
    }while (sum!=0);

    for(int i=sum-1;i>=0;i--)//高位到低位输出
    {
        printf("%d",ans[i]);
    }
    return 0;
}