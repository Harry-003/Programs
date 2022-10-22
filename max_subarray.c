

#include <stdio.h>//Header file for input and output
#include <math.h>
static int max_left, max_right;
// Here structure is created with a name node
struct m_subarr
{
    int low;
    int high;
    int maxsum;
};

struct m_subarr maxcrossingsum(int a[], int low, int mid, int high)
{
    struct m_subarr arrr;
    double left_sum = -INFINITY;
    int sum = 0, i, j, k, finalsum = 0, maxs;
    for (i = mid; i >= low; i--)
    {
        sum = sum + a[i];
        if (sum > left_sum)
        {
            left_sum = sum;
            max_left = i;
        }
    }

    double right_sum = -INFINITY;
    sum = 0;
    for (j = mid + 1; j <= high; j++)
    {
        sum = sum + a[j];
        if (sum > right_sum)
        {
            right_sum = sum;
            max_right = j;
        }
    }
    arrr.high = max_right;
    arrr.low = max_left;
    arrr.maxsum = (left_sum + right_sum);
    return arrr;
}
struct m_subarr maxsubarraynaive(int a[], int n)
{
    int i, sum, maxsum, j,l,m;
    struct m_subarr arrr;
    maxsum = a[1];
    for (i = 1; i <= n; i++)
    {
        sum = 0;
        for (j = i; j <= n; j++)
        {
            sum = sum + a[j];
            if (sum > maxsum)
            {
                l = i;
                m = j;
                maxsum = sum;
            }
        }
    }
    arrr.low =l;
    arrr.high = m;
    arrr.maxsum = maxsum;
    printf("low = %d high = %d",arrr.low,arrr.high);
    return arrr;
}

struct m_subarr maxsubarraysumdivcon(int a[], int low, int high)
{
    int A, B, C;
    struct m_subarr left, right, cross;
    int mid, leftlow, lefthigh, leftsum, rightlow, righthigh, rightsum, crosslow, crosshigh, crosssum;
    if (high == low)
    {
        left.high = high;
        left.low = low;
        left.maxsum = a[low];
        return left;
    }
    else
    {
        mid = (low + high) / 2;
    }
    left = maxsubarraysumdivcon(a, low, mid);
    right = maxsubarraysumdivcon(a, mid + 1, high);
    cross = maxcrossingsum(a, low, mid, high);
    if ((left.maxsum >= right.maxsum) && (left.maxsum >= cross.maxsum))
    {
        return left;
    }
    else if ((right.maxsum >= left.maxsum) && (right.maxsum >= cross.maxsum))
    {
        return right;
    }
    else
    {
        return cross;
    }
}

int main()
{
    int i, n, row, x, k, maxsum;
    struct m_subarr arrr;
    printf("Enter Number of Element in the subarray.......: ");
    scanf("%d", &n);
    int a[n];
    for (i = 1; i <= n; i++)
    {
        printf("Enter elements at %d: ", i);
        scanf("%d", &a[i]);
    }
    do
    {
        printf("\n----Main Menu-----\n");
        printf("1.To Find the maximum subarray using naive approach\n");
        printf("2.To Find the maximum subarray using Divide-and-Conquer approach\n");
        printf("3.To Exit from the program\n");
        printf("Enter your choice: ");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
            arrr = maxsubarraynaive(a, n);
            printf("\n-----Naive Approach-------\n");
            printf("\nThe maximum sum is: %d:  ", arrr.maxsum);
            printf("\nThe maximum subarray is\n");
            for (k = arrr.low; k <= arrr.high; k++)
            {
                printf("a[%d] = %d\n", k, a[k]);
            }
            break;
        case 2:
            arrr = maxsubarraysumdivcon(a, 1, n);
            printf("\n-----Divide and Conquer approach-----\n");
            printf("\nMaximum Sum Of Sub-Array is: %d\n", arrr.maxsum);
            printf("\nThe maximum subarray is\n");
            for (k = arrr.low; k <= arrr.high; k++)
            {
                printf("a[%d] = %d\n", k, a[k]);
            }
            break;
        }
    } while (x <= 2);
    return 0;
}