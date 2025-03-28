#include <stdio.h>

int main() {
    int n, c = 0;
    scanf("%d", &n);
    int *a = (int *)malloc(n * sizeof(int));
    if (a == NULL) {
        printf("Memory allocation failed");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                c++;
            }
        }
    }
    if (c > n / 2) {
        printf("%d", c);
    } else {
        printf("-1");
    }
    free(a);
    return 0;
}
