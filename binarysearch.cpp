#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,mid, left,right,value,arr[100];
    printf("Enter number of elements\n");
    scanf("%d",&n);
    printf("Enter your %d numbers\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter value to find\n");
    scanf("%d",&value);

    left=0;
    right=n-1;
    mid = (left+right)/2;

    while(left<=right) {
        if(arr[mid]<value)
            left=mid+1;
        else if (arr[mid]==value) {
            printf("%d found at %d\n",value,mid+1);
            break;
        }
        else
            right = mid-1;
        mid = (left+right)/2;
    }
    if(left>right)
        printf("Not found !!");
    return 0;

}
