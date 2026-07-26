#include <stdio.h>
#include <stdlib.h>

int count = 0;
int *temp;

void solver(int nums[], int l, int m, int r);

void merge(int nums[], int l, int r) {
    if (l == r)
        return;

    int m = (l + r) / 2;

    merge(nums, l, m);
    merge(nums, m + 1, r);

    solver(nums, l, m, r);
}

void solver(int nums[], int l, int m, int r) {

    for (int i = l; i <= r; i++)
        temp[i] = nums[i];

    int j = m + 1;
    int i = l;

    while (i <= m && j <= r) {
        if (temp[i] / 2.0 > temp[j]) {
            count += m - i + 1;
            j++;
        } else {
            i++;
        }
    }

    i = l;
    int k = m + 1;
    j = l;

    while (j <= m && k <= r) {
        if (temp[j] < temp[k])
            nums[i++] = temp[j++];
        else
            nums[i++] = temp[k++];
    }

    while (j <= m)
        nums[i++] = temp[j++];

    while (k <= r)
        nums[i++] = temp[k++];
}

int reversePairs(int nums[], int numsSize) {
    temp = (int *)malloc(sizeof(int) * numsSize);

    count = 0;

    merge(nums, 0, numsSize - 1);

    free(temp);

    return count;
}