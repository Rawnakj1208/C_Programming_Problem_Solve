
#include <stdio.h>


int main() {
    int arr[100];

    int n;
    printf("Enter the number of the element of the array: ");
    scanf("%d", &n);


    printf("Enter the array elements: ");
    for (int i = 0; i< n; i++){
        scanf("%d", &arr[i]);
    }


    printf("Reversed array is: ");
    for (int i =n-1; i>=0; i--){
        printf("%d ", arr[i]);
    }

    return 0;
}

