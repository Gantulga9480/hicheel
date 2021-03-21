#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void diagonal(int n, float array[n][n]);
void shape_1(int n, float array[n][n]);
void shape_2(int n, float array[n][n]);
void shape_3(int n, float array[n][n]);


int main(void)
{
    srand(time(0));
    int size;
    printf("Enter size: "); scanf("%d", &size);
    float B[size][size];
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            B[i][j] = rand() / 100000000.0;
            printf("%.2f  ", B[i][j]);
        }
        printf("\n");
    }
    diagonal(size, B);
    shape_1(size, B);
    shape_2(size, B);
    shape_3(size, B);
}

void diagonal(int n, float array[n][n])
{
    float max = array[0][0], min = array[0][0];
    int start = n - 1;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(j >= start)
            {
                if(array[i][j] > max)
                {
                    max = array[i][j];
                }
                else if(array[i][j] < min)
                {
                    min = array[i][j];
                }
                printf("%.2f  ", array[i][j]);
            }
            else
            {
                printf("0  ");
            }
        }
        start--;
        printf("\n");
    }
    printf("MAX: %.2f\n", max);
    printf("MIN: %.2f\n", min);
}

void shape_1(int n, float array[n][n])
{
    float max = array[0][0], min = array[0][0];
    int start = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(j >= start)
            {
                if(array[i][j] > max)
                {
                    max = array[i][j];
                }
                else if(array[i][j] < min)
                {
                    min = array[i][j];
                }
                printf("%.2f  ", array[i][j]);
            }
            else
            {
                printf("0  ");
            }
        }
        if(i < n / 2) start++;
        else start--;
        printf("\n");
    }
    printf("MAX: %.2f\n", max);
    printf("MIN: %.2f\n", min);
}

void shape_2(int n, float array[n][n])
{
    float max = array[0][0], min = array[0][0];
    int start = n/2, row_start = n/2, row_end = n/2+1;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i >= start)
            {
                if(j >= row_start && j < row_end)
                {
                    if(array[i][j] > max)
                    {
                        max = array[i][j];
                    }
                    else if(array[i][j] < min)
                    {
                        min = array[i][j];
                    }
                    printf("%.2f  ", array[i][j]);
                }
                else
                {
                    printf("0  ");
                }
            }
            else
            {
                printf("0  ");
            }
        }
        if(i >= n / 2) row_start--, row_end++;
        printf("\n");
    }
    printf("MAX: %.2f\n", max);
    printf("MIN: %.2f\n", min);
}

void shape_3(int n, float array[n][n])
{
    float max = array[0][0], min = array[0][0];
    int start = 0, row_start = n/2, row_end = n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i >= start)
            {
                if(j >= row_start && j < row_end)
                {
                    if(array[i][j] > max)
                    {
                        max = array[i][j];
                    }
                    else if(array[i][j] < min)
                    {
                        min = array[i][j];
                    }
                    printf("%.2f  ", array[i][j]);
                }
                else
                {
                    printf("0  ");
                }
            }
            else
            {
                printf("0  ");
            }
        }
        if(i == n / 2-1) row_start = 0, row_end = n / 2;
        printf("\n");
    }
    printf("MAX: %.2f\n", max);
    printf("MIN: %.2f\n", min);
}