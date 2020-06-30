/*求两个日期之间的差值,每月天数,平年闰年,等等.
用二维数组int month[13][2]; 平年闰年每个月天数存起来. 二维数*/
#include<cstdio>

int month[13][2]={//平年 闰年每月天数
    {0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},
    {31,31},{31,31},{30,30},{31,31},{30,30},{31,31}
};
bool isLeapYear(int year){//判断平年 闰年
    return (year%4==0&&year%100!=0)||(year%400==0);
}

int main()
{
    int time1,y1,m1,d1;// 输入时间,年月日
    int time2,y2,m2,d2;
    while(scanf("%d%d",&time1,time2)!=EOF)
    {
        if(time1>time2){//使time1始终小于time2
            //swap(time1,tim2);//这个省事一些吧
            int time=time1;
            time1=time2;
            time2=time;
        }
        y1=time1/10000;m1=time1%10000/100,d1=time1%100;
        y2=time2/10000;m2=time2%10000/100,d1=time2%100;
        int ans=1;//记录结果
        //第一个日期没有达到第二个日期,进行循环
        while(y1<y2||m1<m2||d1<d2){
            d1++;
            if(d1==month[m1][isLeapYear(y1)]+1){//如何d1==当月天数加一
            m1++;d1=1;
            }
            if(m1==13)
            {
                y1++;m1=1;
            }
            ans++;

        }
        printf("%d\n",ans);
    }
    return 0;
}