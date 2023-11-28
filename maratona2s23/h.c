#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int p[n];
    int i;
    for (i = 0; i < n; i++)
        scanf("%d", &p[i]);
    int equi;
    int igual = 0;
    for (int k = 0; k < n; k++)
    {
        equi = 0;
        if (p[n-1]==p[0])
            igual = 1;
        else
            igual=0;
        for (i = 0; i < n; i++)
        {   
            equi = 0;
            for (int j = 0; j < i+1;)
                if 
        }
    }
}