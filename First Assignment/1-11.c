#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int i,n=10;
    int *arr;
    //allocating memory
    arr = (int*)malloc(n * sizeof(int));

    if(arr!=NULL)
    {
        printf("Memory allocated Successfuly\nEnter 10 elements : ");
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }

        printf("\nThe Entered elements are : \n");
        for(i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }

        free(arr);
        printf("\nMemory freed successfuly\n");
    }


    return 0;
}