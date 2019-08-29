/* Insertion sort
* Input - Collection of elements
* Output - Sorted elements
* Best case - O(n)
* Worst case - O(n2)
*/

#include <stdio.h>
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
    //sorting
    for(i=1; i<n; i++) {
        x = arr[i];
        j = i-1;
        while(j>=0 && arr[j] > x) {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = x;
    }
    //output
    printf("Sorted array :");
    for(i=0; i<n; i++)
        printf(" %d", arr[i]);
    printf("\n");
}
