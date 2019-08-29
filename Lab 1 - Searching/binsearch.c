/* Standard input - sorted array and element to be found
* Standard output - Index of the element
* Best case - O(1)
* Worst case - O(log2 n)
* Avg case - O(log2 n)
*/
#include <stdio.h>

int search(int arr[], int l, int u, int x){
    if(l>u)
        return -1;
    int mid = (u+l)/2;
    if(arr[mid] == x)
        return mid;
    if(x > arr[mid])
        return search(arr, mid+1, u, x);
    else
        return search(arr, l, mid-1, x);
}

int main(){
    int arr[1000];
    int element;
    int i=0;
    while(1){
        scanf("%d", &element);
        if(element==-1)
            break;
        arr[i++] = element;
    }
    printf("Element to be searched : ");
    scanf("%d", &element);
    printf("%d\n",search(arr, 0, i-1, element));
}
