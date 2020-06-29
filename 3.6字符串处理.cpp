#include<cstdio>
#include<cstring>

const int maxn=256;//字符数组最大长度

//判断字符串是否为"回文串"
bool judge(char str[]){
int len=strlen(str);//获取字符串长度
for(int i=0;i<len/2;i++)//枚举字符前一半
{
    if(str[i]!=str[len-1-i])//若位置不对称
        return false;
}
return true;//是回文串
}

int main()
{
    char str[maxn];
    while(gets(str)){//读取输入字符串
    bool flag=judge(str);//做判断
    if(flag==true){//回文串
        printf("YES\n");//输出YES
    }else{//非回文串
        printf("NO\n");//输出NO
    }
    }
    return 0;
}
