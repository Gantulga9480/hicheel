#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void diagonal(int *array, int n);
void copy(int *array[], int *c_array[]);

int main(void)
{
    srand(time(0));
    const int size;
    printf("Enter size: "); scanf("%d", &size);
    int B[size][size];
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            B[i][j] = rand();
            printf("%d  ", B[i][j]);
        }
        printf("\n");
    }
    diagonal(B, size);
}

void diagonal(int *array, int n)
{
    int nums[n][n], max = nums[0][0], min = nums[0][0];
    copy(array, nums);
    int start = 9;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(j == start)
            {
                if(nums[i][j] > max)
                {
                    max = nums[i][j];
                }
                else if(nums[0] < min)
                {
                    min = nums[0][0];
                }
            }
            else
            {
                nums[i][j] = 0;
            }
        }
    }
}

void copy(int *array[], int *c_array[])
{
    int size = sizeof(array) / sizeof(int) / 2;
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            c_array[i][j] = array[i][j]; 
        }
    }
}