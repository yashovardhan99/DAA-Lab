#include <stdio.h>
void swap(int arr[], int i, int j){
    int x = arr[i];
    arr[i] = arr[j];
    arr[j] = x;
}
int partition(int arr[], int p, int r){
    int x=arr[r];
    int i=p-1;
    int j;
    for(j=p;j<r; j++){
        if(arr[j]<=x) {
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i+1, r);
    return i+1;
}

void quicksort(int arr[], int p, int r) {
    if(p<r) {
        int q = partition(arr, p, r);
        quicksort(arr, p, q-1);
        quicksort(arr, q+1, r);
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
    quicksort(arr, 0, n-1);
    //output
    printf("Sorted array :");
    for(i=0; i<n; i++)
        printf(" %d", arr[i]);
    printf("\n");
}