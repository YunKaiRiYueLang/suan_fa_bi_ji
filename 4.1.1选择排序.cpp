/*选择排序：对序列A，每个数据分别为A[1]A[2]等以此类推共n个数据
            令i=1到n。循环n次，每次从A[i]到A[n]选一个最小的与A[i]
            交换。 在这个过程中，A从左到右慢慢变的有序，最终从小到大排列
    时间复杂度为 n的平方
*/


void selectSort(){
    for(int i=1;i<n;i++){   //进行n趟操作
        int k=i;
        for(int j=i;j<n;j++){   //选出【i，n】中最小的元素，下表为k
            if(A[j]<A[k]){
                k=j;
            }
        }
        int temp=A[i];  //交换A【k】和A【i】
        A[i]=A[k];
        A[k]=temp;
    }
}