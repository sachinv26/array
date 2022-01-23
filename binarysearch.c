#include <stdio.h>
struct Array
{
    int A[10];
    int size;
    int length;
};
int binarysearch(struct Array arr,int key)
{
    int low,high,mid;
    low=0;
    high=arr.length-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key==arr.A[mid])
            return mid;
        else if (key<arr.A[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}
int rbinarysearch(int A[],int low, int high,int key)
{
    int mid;
    if(low<=high)
    {
        mid=(low+high)/2;
        if(key==A[mid])
            return mid;
        else if (key<A[mid])
            return rbinarysearch(A,low,mid-1,key);
        else
            return rbinarysearch(A,mid+1,high,key);
    }
    return -1;
}
int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};
    printf("%d\n",binarysearch(arr,3));
    printf("%d",rbinarysearch(arr.A,0,arr.length,2));
    return 0;
}