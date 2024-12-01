/* Name: Ishaan Rajani
   roll no: 08
   UIN: 241P008

   wap to find the largest element in an array*/
#include <stdio.h>

// Function to find the largest element in an array
int findLargest(int arr[], int size) {
    int largest = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i]; 
        }
    }
    return largest;
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = findLargest(arr, n);
    printf("The largest element in the array is: %d\n", largest);

    return 0;
}
/*output:
        Enter the number of elements in the array: 5
Enter the elements of the array:
1 4 6 8 7
The largest element in the array is: 8
*/
