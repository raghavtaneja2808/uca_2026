#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int val;
    int idx;
} Pair;

int *ans;
Pair *temp;

void solver(Pair nums[], int l, int m, int r);

void merge(Pair nums[], int l, int r) {
    if (l >= r)
        return;

    int m = (l + r) / 2;

    merge(nums, l, m);
    merge(nums, m + 1, r);

    solver(nums, l, m, r);
}

void solver(Pair nums[], int l, int m, int r) {

    for (int i = l; i <= r; i++)
        temp[i] = nums[i];

    int i = l;
    int j = m + 1;
    int k = l;

    while (i <= m && j <= r) {

        if (temp[i].val <= temp[j].val) {

            ans[temp[i].idx] += j - (m + 1);

            nums[k++] = temp[i++];
        } else {

            nums[k++] = temp[j++];
        }
    }

    while (i <= m) {

        ans[temp[i].idx] += j - (m + 1);

        nums[k++] = temp[i++];
    }

    while (j <= r)
        nums[k++] = temp[j++];
}

void countSmaller(int nums[], int n) {

    Pair *arr = (Pair *)malloc(sizeof(Pair) * n);
    temp = (Pair *)malloc(sizeof(Pair) * n);
    ans = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++) {
        arr[i].val = nums[i];
        arr[i].idx = i;
    }

    merge(arr, 0, n - 1);

    printf("Answer: ");
    for (int i = 0; i < n; i++)
        printf("%d ", ans[i]);

    printf("\n");

    free(arr);
    free(temp);
    free(ans);
}

int main() {

    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    countSmaller(arr, n);

    return 0;
}