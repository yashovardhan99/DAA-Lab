/* Selection sort
* Input - Collection of elements
* Output - Sorted elements
* Best case - O(n2)
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
    int n=i;
    //sorting
    for(i=0; i<n; i++) {
        int min = arr[i];
        x = i;
        for(j=i+1; j<n; j++) {
            if(arr[j] < min){
                x = j;
                min = arr[j];
            }
        }
        if(x!=i) {
            arr[x] = arr[i];
            arr[i] = min;
        }
    }
    //output
    printf("Sorted array :");
    for(i=0; i<n; i++)
        printf(" %d", arr[i]);
    printf("\n");
}