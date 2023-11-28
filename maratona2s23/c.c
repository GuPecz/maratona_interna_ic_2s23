#include <stdio.h>

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    int v[n];

    int i;
    for (i = 0; i < n; i++)
        scanf("%d", &v[i]);

    int menor = 0, maior = 0;
    int ind_men = 0, ind_mai = 0;
    int soma;
    for (i = 0; i <= n - k; i++)
    {
        soma = 0;
        for (int j = i; j < i + k; j++)
            soma += v[j];
        if (soma > maior)
        {
            maior = soma;
            ind_mai = i + 1;
        }
        if (soma < menor || i == 0)
        {
            menor = soma;
            ind_men = i + 1;
        }
    }

    printf("%d %d", ind_men, ind_mai);
}