#include <stdio.h>
void merge(int arr[], int p, int q, int r) {
    int n1 = q-p+1;
    int n2 = r-q;
    int left[n1+1];
    int right[n2+1];
    int i, j, k;

    for(i=0; i<n1; i++)
        left[i] = arr[p+i];
    for(j=0; j<n2; j++)
        right[j] = arr[q+j+1];
    
    left[n1] = 9999999999;
    right[n2] = 9999999999;
    i=0; j=0;
    
    for(k=p; k<=r; k++){
        if(left[i] <= right[j]){
            arr[k] = left[i];
            i++;
        }
        else {
            arr[k] = right[j];
            j=j+1;
        }
    }
}
void mergesort(int arr[], int p, int r) {
    if(p<r){
        int q = (p+r)/2;
        mergesort(arr, p, q);
        mergesort(arr, q+1, r);
        merge(arr, p, q, r);
    }
}
int main() {
    int arr[1000];
    int x, j;
    int i=0;
    printf("Enter elements : ");
    //input
    while(1){
        scanf("%d",&x);
        if(x==-1)
            break;
        arr[i++] = x;
    }
    int n = i;
    mergesort(arr, 0, n-1);
    //output
    printf("Sorted array :");
    for(i=0; i<n; i++)
        printf(" %d", arr[i]);
    printf("\n");
}