#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k,n,w,i,m=0;
    scanf("%d %d %d",&k,&n,&w);
    for(i=1;i<=w;i++){
        m+=i*k;
    }
    if((m-n)<=0) {
        printf("0\n");
        return 0;
    }
    printf("%d\n",m-n);
    return 0;
}
