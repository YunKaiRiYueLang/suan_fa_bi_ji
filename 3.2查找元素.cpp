//读完这个题目介绍,第一反应是用哈希表来完成.看来刷leetcode,精做题
//还是有效果的

#include<cstdio>

const int maxn=210;
int a[maxn];//存放n个数
int main(){
    int n,x;
    while(scanf("%d",&n)!=EOF)// 循环读取,测试数据有多组?
    {
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
    
        scanf("%d",&x);//输入欲查询的数
        int k;//下标
        for(k=0;k<n;k++)
        {
            if(a[k]==x){//找到了
            printf("%d",k);
            break;
            }
        } 
    if(k==n){  //循环读入所以需要再次判断
    printf("-1\n");//输出-1
        }
    }
return 0;
}
//代码的每一行都挺重要的,看,还真没感觉