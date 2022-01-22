#include<stdio.h>
#include<stdlib.h>
struct array
{
    int *A;
    int size;
    int length;
};
void display(struct array arr)
{
    printf("\nThe elements are\n");
    for(int i=0;i<arr.size;i++)
    {
        printf("%d \n",arr.A[i]);
    }
}
int main()
{
    struct array arr;
    printf("enter the array size");
    scanf("%d",&arr.size);
    arr.A=(int *)malloc(arr.size*sizeof(int));
    printf("\nenter the elements\n");
    for(int i=0;i<arr.size;i++)
    {
        scanf("%d",&arr.A[i]);
    }
    display(arr);
    return 0;
}
