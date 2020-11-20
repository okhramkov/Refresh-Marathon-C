int mx_sqrt(int x) {
    int temp, sqrt;
    sqrt = x / 2;
    temp = 0;
    if(x < 0) {
        x *= -1;
    }
    while(sqrt != temp){
        temp = sqrt;
        sqrt = ( x / temp + temp) / 2;
    }
    if(sqrt * sqrt != x) {
        return 0;
    }
    else {
        return sqrt;
    }
     
}

// #include<stdio.h>
// int main () {
//     printf("%d", mx_sqrt(1999878400));
// }
