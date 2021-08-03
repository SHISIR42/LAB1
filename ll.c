/*Shisir Pandey 20BCE873*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
    int *arr,i,j,n,temp,k;

    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);

    arr=(int*)malloc(sizeof(int)*n);

    for(i=0;i<n;i++)
    {
        printf("Enter the data :");
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[j] <arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nElements of array in sorted ascending order:\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t ", arr[i]);
    }




    printf("\nEnter the value of k:");
    scanf("%d",&k);

    if(k<=n)
        printf("The kth smallest  element is %d\n",arr[k-1]);
    else
        printf("INVALID INPUT");

    getch();
}
