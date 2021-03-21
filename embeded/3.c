#include <stdio.h>

void decToHexa(int n);
void decToBin(int n);

int main(void)
{
    int num, m_high = 16711680, m_min = 255, m_mid = 65280;
    printf("Enter number: "); scanf("%d", &num);
    if(num <= 16777215)
    {
        decToHexa(num);
        decToBin(num);
        printf("Result:\n");
        int high = num & m_high;
        int low = num & m_min;
        int mid = num & m_mid;
        high = high >> 16;
        low = low << 16;
        int res = low + high + mid;
        printf("DEC: %d\n", res);
        decToHexa(res);
        decToBin(res);
    }
}

void decToHexa(int n)
{
    char hexaDeciNum[100]; 
    int i = 0;
    while(n!=0)
    {
        int temp  = 0;
        temp = n % 16;
        if(temp < 10)
        {
            hexaDeciNum[i] = temp + 48; 
            i++;
        }
        else
        {
            hexaDeciNum[i] = temp + 55; 
            i++;
        }
        n = n/16;
    }
    printf("HEX: ");
    for(int j=i-1; j>=0; j--)
        printf("%c", hexaDeciNum[j]);
    printf("\n");
}

void decToBin(int n)
{
    int a[24], i;
    for(i=0;n>0;i++)
    {
        a[i]=n%2;
        n=n/2;
    }
    printf("BIN: ");
    for(i=i-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    printf("\n");
}