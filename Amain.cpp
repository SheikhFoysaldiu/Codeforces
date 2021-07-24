 #include<stdio.h>
 #include<algorithm>
 using namespace std;
 struct node{
     int a;
     int b;
 }dian[2010];
 bool cmp(node one,node two){
     return one.b<two.b;//恢复相对顺序
 }
 bool cmp1(node one,node two){
     return one.a>two.a;//为了求k项最大的和 
 }
 int main()
 {
     int n,k;
     scanf("%d%d",&n,&k);
     for (int i=1;i<=n;i++)
     {
         scanf("%d",&dian[i].a);
         dian[i].b=i;
     }
     sort(dian+1,dian+1+n,cmp1);
     long long sum=0;
     for (int i=1;i<=k;i++)
     sum+=dian[i].a;
     sort(dian+1,dian+1+k,cmp);//最大的k项恢复相对位置。******重点。 
     printf("%d\n",sum);
     if(k==1)
     printf("%d\n",n);
     else
     {
         for (int i=1;i<=k;i++)//每天解决的问题就是每个最困难的问题和上一个最困难的问题之间的问题个数。 
         {
             if(i==1)//第一个困难问题特判一下 
             printf("%d",dian[i].b); 
             else if(i==k)//最后一个困难问题特判一下 
             printf(" %d\n",n-dian[k-1].b);
             else
             printf(" %d",dian[i].b-dian[i-1].b);
         }
     }
 }
