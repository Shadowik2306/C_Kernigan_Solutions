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

int binseach(int x, int v[], int n) {
    int low, high, mid;

    low = 0;
    high = n - 1;

    while (low <= high && x != v[mid]) {
        mid = (low + high) / 2;
        if (x < v[mid]) {
            if (x < v[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
    }

    if (x == v[mid])
        return mid;
    else
        return -1;
}


int main() {
    return 0;
}