/*排序题会给很多信息,个体的信息,常存于结构体中*/
struct Student
{
    /* data */
    char name[10];  //姓名
    char id[10];    //准考证号
    int sorce;      //得分
    int r;          //排名
}stu[100010];


/*sort函数需要提供排序规则,如分数高到低,姓名字典顺序小到大等等*/

bool cmp(Student a,Student b){
    if(a.sorce!=b.sorce)    return a.sorce>b.sorce;
    else return strcmp(a.name,b.name)<0;
}

/*排名 */

stu[0]=1;

for(int i=1;i<n;i++){
    if(stu[i].sorce==stu[i-1].sorce){
        stu[i].r=stu[i-1].r;
    }else{
        stu[i].r=i+1;
    }
}


// PAT A1025
#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;
struct Student{
    char id[15];    //准考证号
    int score;      //分数
    int location_number:    //考场号
    int local_rank;         //考场内排名
}stu[30010];
bool cmp(Student a,Student b){
    if(a.score!=b.score)    return a.score>b.score;     //先分数高到低排列
    else return strcmp(a.id,b.id)<0;    //分数相同按准考证号小到大排列
}

int main(){
    int n,k,num=0;  //num为总考生数
    scanf("%d",&n); //n为考场数
    for(int i=1;i<=n;i++){
        scanf("%d",&k);     //该考场人数
        for(int j=0;j<k;j++){
            scanf("%s %d",stu[num].id,&stu[num].sorce);
            stu[num].location_number=i; //考场号为i
            num++;
        }
        sort(stu+m-k,stu+num,cmp);//排序该考场
        sut[num-k].local_rank=1;
        for(int j=num-k+1;j<num;j++){
            if(stu[j].score ==stu[j-1].score){
                stu[j].local_rank=j+1-(num-k);
            }
        }
    }

    printf("%d\n",num);
    sort(stu,stu+num,cmp);
    int r=1;
    for(int i=0;i<num;j++){
        if(i>0&&stu[i].score!=stu[i-1].sorce){
            r=i+1;
        }
        printf("%s ",stu[i].id);
        printf("%d %d %d \n",r,stu[i].location_number,stu[i].local_rank);
    }
    return 0;
}