#include <stdio.h>

/* example from book */
int binsearch_ex(int x, int v[], int n) {
    int low, high, mid;

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;
        if (x < v[mid])
            high = mid - 1;
        else if (x > v[mid])
            low = mid + 1;
        else
            return mid;
    }
    return -1;
}

int binsearch(int x, int v[], int n) {
    int low, high, mid;

    low = 0;
    high = n - 1;

    while (low <= high && x != v[mid]) {
        mid = (low + high) / 2;
        if (x < v[mid])
            high = mid - 1;
        else
            low = mid + 1;

    }

    if (x == v[mid])
        return mid;
    else
        return -1;
}


int main() {
    int arr[10] = {-8, 0, 1, 3, 5, 6, 7, 9, 10, 11};
    printf("%d\n", binsearch(10, arr, 10));
    printf("%d\n", binsearch_ex(10, arr, 10));
    printf("%d\n", binsearch(-2, arr, 10));
    printf("%d\n", binsearch_ex(-2, arr, 10));
    return 0;
}