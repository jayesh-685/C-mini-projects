#include<stdio.h>
#include<stdlib.h>
void main()
{
    int **a;
    int i,j,m,n;
    scanf("%d %d",&m,&n);
    a = (int **)malloc(m*sizeof(int*));
    for(i=0;i<m;i++)
        *(a+i) = (int *)malloc(n*sizeof(int));
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",(*(a+i)+j));
    }
        }
    for(i=0;i<m;i++){ 
        for(j=0;j<n;j++){
            if((i+j)%2==0)
                printf("%d ",*(*(a+i)+j)); 
        }
    }
}