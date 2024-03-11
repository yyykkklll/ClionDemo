#include <stdio.h>

int binarySearch(int arr[], int low, int high, int target)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        // 如果中间元素正好是目标值，则返回其索引
        if (arr[mid] == target)
        {
            return mid;
        }

        // 如果目标值较小，继续在左半部分查找
        if (arr[mid] > target)
        {
            high = mid - 1;
        }

        // 如果目标值较大，继续在右半部分查找
        else
        {
            low = mid + 1;
        }
    }

    // 如果循环结束仍未找到目标值，则返回-1表示未找到
    return -1;
}

int main()
{
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 10;
    int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1)
    {
        printf("Element %d is present at index %d.\n", target, result);
    }
    else
    {
        printf("Element %d is not present in the array.\n", target);
    }

    return 0;
}
