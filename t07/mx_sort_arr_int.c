#include<stdio.h>

void mx_sort_arr_int(int *arr, int size) {
    for (int i = 0; i < size - 1; i++){
        for (int l = 0; l < size - i - 1; l++) {
           if (arr[l] > arr[l + 1]) {
                int tmp = arr[l];
                arr[l] = arr[l + 1];
                arr[l + 1] = tmp;
            }
        }
    }
}

// int main(void) {
// 	int size = 10;
// 	int arr[] = {-34, 3, 55, -11, 1, 45, 0, 22, 5, -2};
// 	for (int i = 0; i < size; i++)
// 		printf("%d ", arr[i]);
// 	printf("\n");
// 	mx_sort_arr_int(arr, size);
// 	for (int i = 0; i < size; i++)
// 		printf("%d ", arr[i]);
// }
