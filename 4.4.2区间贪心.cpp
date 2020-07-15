
/*尽可能选择多的开区间,是它们两两没有交集*/

#include<cstdio>
#include<algorithm>

using namespace std;

const int maxn=110;

struct Inteval{
    int x;int y;    //开区间的左右端点
}I[maxn];
bool cmp(Inteval a,Inteval b){
    if(a.x!=b.x)    return  a.x>b.x;    //先按照左端点从大到小排序
    else
    {
        return a.y<b.y;     //左端点相同,右端点从小到大排序
    }
    
}

int main(){
    int n;
    while (scanf("%d",&n),n!=0)     //使程序换后读取
    {
        for(int i=0;i<n;i++){
            scanf(" %d %d ",&I[i].x,&I[i].y);
        }
        sort(I,I+n,cmp);    //区间排序
        //ans记录不相交区间个数,lastX记录上一个被选中区间的左端点
        int ans=1;int lastX=I[0].x;
        for(int i=0;i<n;i++){
            if(I[i].y<lastX){
                ans++;
                lastX=I[i].x ;
            }
        }
        printf("%d\n",ans)
    }
    return 0;
}