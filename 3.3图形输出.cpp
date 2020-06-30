#include<cstdio>
int main()
{
    int rows,cols;//行,列
    char c;
    scanf("%d %c",&cols,&c);//输入列数和字符
    if(cols%2==1) rows=cols/2+1;//为奇数则向上取整.
    else rows=cols/2;
    //打印第一行
    for(int i=0;i<cols;i++)
    {
        printf("%c",c);//cols个字符
    }
    printf("\n");
    //打印第2-rows-1行
    for(int i=2;i<rows;i++)
    {
        printf("%c",c);//每行第一个c
        for(int j=0;j<cols-2;j++)
        {
            printf(" ");//j-2个空格
        }
        printf("%c",c);//每行最后一个c
    }
        //打印第rows行
    for(int i=0;i<cols;i++)
    {
        printf("%c",c);//cols个字符
    }
    return 0;
    
}