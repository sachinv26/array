#include <stdio.h>
struct Array
{
    int A[10];
    int size;
    int length;
};
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
int LinearSearch(struct Array *arr,int x)
{
    int i;
    for(i=0;i<arr->length;i++)
    {
        if(arr->A[i]==x)
        {
            swap(&arr->A[i],&arr->A[0]);
            return i;
        }
    }
    return -1;
}
int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};
    printf("%d",LinearSearch(&arr,4));
    return 0;
}