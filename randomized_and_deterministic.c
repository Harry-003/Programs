#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void swapping(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int *Arr, int *p, int *r)
{
    int pivot = *(Arr + *r);
    int i = (*p - 1);

    for (int j = *p; j <= *r - 1; j++)
    {
        if (*(Arr + j) < pivot)
        {
            i++;
            swapping(&*(Arr + i), &*(Arr + j));
        }
    }
    swapping(&*(Arr + i + 1), &*(Arr + *r));
    return (i + 1);
}
int median_element(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                swapping((arr + i), (arr + j));
            }
        }
    }
    return arr[n / 2];
}
int deterministic_select(int *arr, int k, int n)
{
    if (n == 1)
        return arr[0];

    int leng = (int)ceil(n / 5.0f),ex = 0,g[leng],i;
    for (i = 0; i < leng; i++)
    {
        int mul = i * 5;
        while (mul < ((i * 5) + 5) && mul < n)
        {
            int temp[5];
            for (int k = 0; k < 5; k++)
            {
                temp[k] = arr[mul++];
            }
            g[ex++] = median_element(temp, mul - (i * 5));
        }
    }
    int deter = deterministic_select(g, (int)ceil(leng / 2.0f), leng),L[n],E[n],G[n],p = 0, q = 0, r = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == deter)
            E[q++] = arr[i];
        else if (arr[i] > deter)
            G[r++] = arr[i];
        else
            L[p++] = arr[i];
    }
    if (k <= p)
        deterministic_select(L, k, p);
    else if (k <= (p + q))
        return deter;
    else
        deterministic_select(G, k - p - q, r);
}
int randomizedpartition(int *Arr, int *p, int *r)
{
    int q;
    int pivot_index = *p + rand() % (*r - *p + 1);
    int i = (*p - 1);
    int pivot = *(Arr + pivot_index);
    swapping(&*(Arr + pivot_index), &*(Arr + *r));
    q = partition(Arr, p, r);
    return q;
}

int random_select(int *Arr, int *p, int *r, int i)
{
    // int i;
    if (*p == *r)
    {
        return *(Arr + *p);
        // printf("%d",*(Arr + *p));
    }
    else
    {
        int q = randomizedpartition(Arr, p, r);
        int k = q - *p + 1;
        if (i == k)
        {
            return Arr[q];
        }
        else
        {
            if (i < k)
            {
                int t = q - 1;
                return random_select(Arr, p, &t, i);
            }
            else
            {
                int s = q + 1;
                return random_select(Arr, &s, r, i - k);
            }
        }
    }
}


int main()
{
    int i, j, n, x, z, Arr[20];
    printf("Enter the number of array elements");
    scanf("%d", &n);
    printf("Enter the array elements");
    for (j = 0; j < n; j++)
    {
        scanf("%d", &Arr[j]);
    }

    do
    {
        printf("\n1. Randomized Select\n");
        printf("2. Deterministic Select\n");
        printf("3. Exit from the program\n");
        printf("Enter your option");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
        printf("------>Randomized select<--------\n");
        int p = 0;
        int q = n - 1;
        printf("Enter the minimum element you want to search: ");
        scanf("%d", &i);
        z = random_select(Arr, &p, &q, i);
        printf("The % d minimum element is % d\n", i, z);
        break;
        case 2:
            printf("Deterministice......\n");
            printf("Enter the minimum element you want to search: ");
            scanf("%d", &i);
            int size = n;
            printf("The ith minimum element is : %d\n", deterministic_select(Arr, i, size));
            break;
        }
    } while (x <= 2);
    return 0;
}