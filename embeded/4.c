#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(0));
    int n, f = 0, b = 0, min, max;
    printf("Enter size: "); scanf("%d", &n);
    int A[n];
    for(int i = 0; i < n; i++)
    {
        A[i] = rand();
    }
    min = A[0]; max = A[0];
    for(int i = 0; i < n; i++)
    {
        if(A[i] < min)
        {
            min = A[i];
        }
        if(A[i] > max)
        {
            max = A[i];
        }
    }
    max = max - min;
    int ratio = (float)max / min;
    for(int i = 0; i < n; i++)
    {
        A[i] = (float)(A[i] - min) / max * ratio + 1;
    }
    for(int i = 0; i < n; i++)
    {
        f = f + A[i] * A[n-1-i];
    }
    for(int i = 0; i < n - 1; i++)
    {
        b = b + A[i] * A[i+1];
    }
    printf("1: %d\n2: %d\n", f, b);
}