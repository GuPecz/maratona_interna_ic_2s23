#include <stdio.h>

int main()
{
    int x1, y1, x2, y2;

    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    if (x1 > x2)
        printf("0");
    else if ((x2 > x1 && y2 >= y1) || (x2 == x1 && y2 >= y1))
        printf("-1");
    else if (x1 == x2 && y1 > y2)
        printf("1");
    else
        printf("%d", (((x2 - x1)/(y1 - y2)) + 1));
}