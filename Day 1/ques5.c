#include<stdio.h>
main()
 {

    int a[20],b[20],c[20],d=0;
    int m,n,i, j, k = 0;
    printf("enter the size of array 1\n");
    scanf("%d",&n);
    printf("enter the array 1\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter of size of array 2\n");
    scanf("%d",&m);
    printf("enter the array 2\n");
    for(i=0;i<m;i++)
        scanf("%d",&b[i]);
for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (a[i] == b[j])
                d++;
            }
        if(d==0)
        {
            c[k]=a[i];
        k++;
        }
        d=0;
    }
    printf("\nIntersection of Two Array is :");
    for (i = 0; i < k; i++) {
        printf("%d ", c[i]);
    }
}
