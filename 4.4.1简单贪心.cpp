/*
求解最优化问题. 总是考虑局部最优,来使全局最优
*/
/*------------------月饼-------------*/
#include<cstdio>
#include<algorithm>
using namespace std;

struct mooncake{
    double store;   //库存量
    double sell;    //总售价
    double price;   //单价
}cake[1010];
bool cmp(mooncake a,mooncake b){    //按照单价从高到底排序
    return a.price>b.price;
}

int main(){
    int n;
    double D;
    scanf("%d%lf",&n,&D);
    for(int i=0;i<n;i++){
        scanf("%lf",&cake[i].store);
    }
    for(int i=0;i<n;i++){
        scanf("%lf",&cake[i].sell);
        cake[i].price=cake[i].sell/cake[i].store;//计算单价
    }
    sort(cake,cake+n,cmp);  //按照单价从高到低排序

    double ans=0;   //收益
    for(int i=0;i<n;i++){
        if(cake[i].store<=D){   //若需求量高于库存量
        D-=cake[i].store;   //卖出全部库存
        ans+=cake[i].sell;
        }else{  //若库存高于需求量
        ans+=cake[i].price*D;
        break;
        }
    }
    printf("%.2f\n",ans);
    return 0;


}

/*-----------------------组个最小数------------------------*/
#include<cstdio>
int main(){
    int cont[10];
    for(int i=0;i<10;i++){
        scanf("%d",&cont[i]);
    }
    for(int i=1;i<10;i++){//1-9中选个不为0的最小数
        if(cont[i]>0){
            printf("%d",i);
            cont[i]--;
            break;//找到第一个中断
        }
    }

    for(int i=0;i<10;i++){
        for(int j=0;j<cont[i];j++){
            printf("%d",i);
        }
    }
    return 0;
}


