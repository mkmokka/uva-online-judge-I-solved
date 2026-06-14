#include<bits/stdc++.h>
using namespace std;
int func(int a,int b)
{
    int count=1,val=0,temp;
    if(a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    while(a<=b)
    {
        int x=a;
        while(x!=1)
        {
            if(x%2==0)
            {
                x=x/2;
            }
            else x=x*3+1;
            count++;
        }
        if(count>val)
            val=count;
        count=1;
        a++;
    }
    return val;
}
 int main()
 {
     int i,j,result;
     while(scanf("%d %d",&i,&j)!=EOF){
     result=func(i,j);
     printf("%d %d %d\n",i,j,result);

     }
 }
