#include <stdio.h>
#include <stdlib.h>

int main() {
    int*p=(int *)malloc(10*sizeof(int));
    for(int i=0;i<10;i++){
        scanf("%d",(p+i));
    }
    for (int i=0;i<10;i++){
        printf("%d",&(p[i]));
    }
    int sum=0;
    for(int i=0;i<10;i++)
    {
        sum=sum+*(p+i);
    }
    printf("sum=%d\n",sum);
    

    return 0;
}