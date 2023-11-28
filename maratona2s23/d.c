#include <stdio.h>

int main()
{
    int n, m;

    scanf("%d %d", &n, &m);
    char grid[n][m];
    char barraeni;
    int xt, yt, xi1 = - 1, yi1, xi2 = -1, yi2;

    for (int i = 0; i < n; i++)
    {
        scanf("%c", &barraeni);
        for (int j = 0; j < m; j++)
        {
            scanf("%c", &grid[i][j]);
            switch (grid[i][j])
            {
                case 'T':
                xt = i;
                yt = j;
                break;

                case '*':
                if (xi1 == -1)
                {
                    xi1 = i;
                    yi1 = j;
                }
                else
                {
                    xi2 = i;
                    yi2 = j;
                }
                break;
            }
            if (xi2 != -1)
                break;
        }
        if (xi2 != -1)
                break;
    }

    
}