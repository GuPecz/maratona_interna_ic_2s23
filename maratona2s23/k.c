#include <stdio.h>

int main()
{
    int n, q;
    int op;
    scanf("%d %d", &n, &q);
    int p[2*n];
    int i, j;

    for (i = 0; i < (2*n)-1;i+=2)
    {
        scanf("%d", &p[i]);
        p[i+1] = p[i];
    }

    int l, r, x;
    int opts = 0;
    for (i = 0; i < q; i++)
    {
        scanf("%d", &op);
        if (op == 1)
        {
            scanf("%d %d %d", &l, &r, &x);
            for (j = 2*(l - 1);j<=2*(r-1);j+=2)
            {
                if (p[j] + x > p[j+1])
                    p[j+1] = p[j] + x;
                p[j] += x;
            }
        }
        else
        {
            scanf("%d %d", &l, &r);
            opts = 0;
            for (j = 2*(l - 1);j<=2*(r-1);j+=2)
                opts += p[j+1];
            printf("%d\n", opts);
        }
    }
}