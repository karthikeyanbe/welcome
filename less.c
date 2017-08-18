#include <stdio.h>

int main(void) {
    int a[100],n,sum,i,j,b[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=0;
        for(j=0;j<i;j++)
        {
            if(a[i]>a[j]) b[i]++;
            else b[j]++;
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",b[i]);

    return 0;
}
