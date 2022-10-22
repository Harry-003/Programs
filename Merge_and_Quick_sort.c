#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int *MERGE(int *Arr, int p, int q, int r)
{
    int n1 = q - p + 1;
    int n2 = r - q;
    double Left[n1];
    double Right[n2];
    for (int i = 1; i <= n1; i++)
    {
        Left[i] = Arr[p + i - 1];
    }
    for (int j = 1; j <= n2; j++)
    {
        Right[j] = Arr[q + j];
    }
    Left[n1 + 1] = INFINITY;
    Right[n2 + 1] = INFINITY;
    int i = 1;
    int j = 1;
    for (int k = p; k <= r; k++)
    {
        if (Left[i] <= Right[j])
        {
            Arr[k] = Left[i];
            i++;
        }
        else
        {
            Arr[k] = Right[j];
            j++;
        }
    }
    return Arr;
}

void MERGESORT(int *Arr, int p, int r)
{
    if (p < r)
    {
        int q = (p + r) / 2;
        MERGESORT(Arr, p, q);
        MERGESORT(Arr, q + 1, r);
        MERGE(Arr, p, q, r);
    }
    return;
}
void swapping(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition(int *Arr, int p, int r)
{
    int pivot = Arr[r];
    int i = (p - 1);

    for (int j = p; j <= r - 1; j++)
    {
        if (Arr[j] < pivot)
        {
            i++;
            swapping(&Arr[i], &Arr[j]);
        }
    }
    swapping(&Arr[i + 1], &Arr[r]);
    return (i + 1);
}

int *quickSort(int *Arr, int p, int r)
{
    if (p < r)
    {
        int q = partition(Arr, p, r);
        quickSort(Arr, p, q - 1);
        quickSort(Arr, q + 1, r);
    }
    return Arr;
}
int main()
{
    int n, A;
    printf("\n\t\t---------------Sorting Technique-----------------\n\n");
    printf("Enter Number Of Element in the Array:-  ");
    scanf("%d", &n);
    int Arr[n], i;
    printf("*********************************\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter the %d element of Array:", i + 1);
        scanf("%d", &Arr[i]);
        // Arr[i] = rand() % 31;
    }
    do
    {
        printf("\n*******************************************************************\n");
        printf("\n--------Main Menu--------\n");
        printf("\n1.Sorting Using MERGE Sort Algorithm\n");
        printf("2.Sorting Using Quick Sort Algorithm\n");
        printf("3.To Exit\n");
        printf("\nEnter Your Choice : ");
        scanf("%d", &A);
        switch (A)
        {
        case 1:
            printf("\n-------> MERGE Sorting <------\n\n");
            MERGESORT(Arr, 0, n - 1);
            printf("Sorted Array is ->>>  ");
            for (int i = 0; i < n; i++)
            {
                printf(" %ld ", Arr[i]);
            }
            printf("\n\n-----> *** MERGE Sorting successfully Done *** <-------\n");
            break;
        case 2:
        printf("\n-------> Quick Sorting <------\n\n");
            quickSort(Arr, 0, n - 1);
            printf("Sorted Array is ->>>  ");
            for (i = 0; i < n; i++)
            {
                printf(" %d ", Arr[i]);
            }
            printf("\n\n-----> *** Quick Sorting successfully Done *** <-------\n");
            break;
        case 3:
            printf("\n-----Successfully Done-------\n\n");
            break;
        }
    } while (A < 3);
    return 0;
}




/*#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void swapping(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int randomizedpartition(int *Arr, int p, int r)
{
    int q;
    int pivot_index = p + rand()%(r-p+1);
    int pivot = Arr[pivot_index];
    swapping(&Arr[pivot_index],&Arr[r]);
    q = randomizedpartition(Arr,p,r);
    return q;
}


/*int randomizedpartition(int *Arr, int p, int r)
{
    int pivot_index = p + rand()%(r-p+1);
    int i = (p - 1);
    int pivot = Arr[pivot_index];
    swapping(&Arr[pivot_index],&Arr[r]);
    for (int j = p; j <= r - 1; j++)
    {
        if (Arr[j] < pivot)
        {
            i++;
            swapping(&Arr[i], &Arr[j]);
        }
    }
    swapping(&Arr[i + 1], &Arr[r]);
    return (i + 1);
}*/
/*
int *randomizedquickSort(int *Arr, int p, int r)
{
    if (p < r)
    {
        int q = randomizedpartition(Arr, p, r);
        randomizedquickSort(Arr, p, q - 1);
        randomizedquickSort(Arr, q + 1, r);
    }
    return Arr;
}

int main()
{
    int n, A;
    printf("\n\t\t---------------Sorting Technique-----------------\n\n");
    printf("Enter Number Of Element in the Array:-  ");
    scanf("%d", &n);
    int Arr[n], i;
    printf("*********************************\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter the %d element of Array:", i + 1);
        scanf("%d", &Arr[i]);
        // Arr[i] = rand() % 31;
    }
    do
    {
        printf("\n*******************************************************************\n");
        printf("\n--------Main Menu--------\n");
        printf("1.Sorting Using Randomized Quick Sort Algorithm\n");
        printf("2.To Print Element\n");
        printf("3.To Exit\n");
        printf("\nEnter Your Choice : ");
        scanf("%d", &A);
        switch (A)
        {
        case 1:
        printf("\n-------> Randomized Quick Sorting <------\n\n");
            randomizedquickSort(Arr, 0, n - 1);
            printf("Sorted Array is ->>>  ");
            for (i = 0; i < n; i++)
            {
                printf(" %d ", Arr[i]);
            }
            printf("\n\n-----> *** Randomized Quick Sorting successfully Done *** <-------\n");
            break;
        /*case 2:
            printelement();
             break;*/
        /*case 3:
            printf("\n-----Successfully Done-------\n\n");
            break;
        }
    } while (A < 3);
    return 0;
}*/
