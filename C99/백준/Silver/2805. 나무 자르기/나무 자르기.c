#pragma warning (disable:4996);
#include <stdio.h>
#include <stdlib.h>
int x[1000001] = { 0 };
int compare(const void* a, const void* b) {
    if (*(int*)a > *(int*)b) {
        return 1;
    }
    else if (*(int*)a < *(int*)b) {
        return -1;
    }
    else {
        return 0;
    }
}
int main() {
    long long n, m, b = 0;
    scanf("%lld %lld", &n, &m);
    for (int i = 0; i < n; i++)
        scanf("%lld", &x[i]);
    qsort(x, n, sizeof(int), compare);
    long long left = 1, right = x[n - 1];
    while (left <= right) {
        long long a = 0;
        long long mid = left + (right - left) / 2;
        for (int i = 0; i < n; i++) {
            if (x[i] > mid)
                a += x[i] - mid;
        }
        if (a >= m) {
            if (mid > b)
                b = mid;
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    printf("%lld", b);
}