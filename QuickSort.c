#include <stdio.h>
int partition(int A[],int left,int right){
    int pivot=A[left],i=left+1,j=right,temp;
    while (1){
        while (pivot>=A[i] && i<=right){
            i++;
        }
        while (pivot<A[j]){
            j--;
        }
        if(i<j){
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
        else{
            temp=A[left];
            A[left]=A[j];
            A[j]=temp;
            return j;
        }
    }
}
void quicksort(int A[],int left,int right){
    int s;
    if(left<right){
        s=partition(A,left,right);
        quicksort(A,left,s-1);
        quicksort(A,s+1,right);
    }
}
int main() {
    int n,A[100],i;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the element %d:",i+1);
        scanf("%d",&A[i]);
    }
    quicksort(A,0,n-1);
    printf("Sorted Array using Quick Sort:");
    for(i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    return 0;
}
