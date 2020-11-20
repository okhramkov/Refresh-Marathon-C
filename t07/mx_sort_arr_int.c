void mx_sort_arr_int(int *arr, int size) {
    for (int i = 0; i < size; i++){
        for (int l = 0; l < size - 1; l++) {
           if (arr[l] > arr[i + 1]) {
                int tmp = arr[l];
                arr[l] = arr[i + 1];
                arr[i + 1] = tmp;
            }
        }
    }
}
