#include <stdio.h>
#include <math.h>

main()
{
    int d;
    int a[20][20];
    int i, x, y;
    int e, f;

    int s[2]={0,1};
    printf("输入阶数（<20）：");
    scanf("%d", &d);

    if (d % 2 == 1) /* 奇数阶 */
    {
        for (x = 0; x < d; x++)
            for (y = 0; y < d; y++)
                a[x][y] = 0;

        x = 0;
        y = d / 2;
        a[x][y] = 1;
        for (i = 2; i <= d * d; i++)
        {
            if (x == 0 && y == d - 1)
            {
                x++;
            }
            else
            {
                if (a[x == 0 ? d - 1 : x - 1][y == d - 1 ? 0 : y + 1] != 0)
                    x++;
                else
                {
                    x = x == 0 ? d - 1 : x - 1;
                    y = y == d - 1 ? 0 : y + 1;
                }
            };
            a[x][y] = i;
        }
        for (e = 0; e < d; e++)
        {
            for (f = 0; f < d; f++)
                printf("%-4d", a[e][f]);
            printf("\n");
        }
        printf("\n");
    }
    else if (d % 4 == 0) /* 双偶数阶 */
    {
        i = 1;
        for (x = 0; x < d; x++)
        {
            for (y = 0; y < d; y++)
            {
                a[x][y] = i++;
            }
        }

        for (x = d / 4; x < d - d / 4; x++)
        {
            for (y = 0, f = d - 1; y < f; y++, f--)
            {
                i = a[x][y];
                a[x][y] = a[x][f];
                a[x][f] = i;
            }
        }
        for (y = d / 4; y < d - d / 4; y++)
        {
            for (x = 0, e = d - 1; x < e; x++, e--)
            {
                i = a[x][y];
                a[x][y] = a[e][y];
                a[e][y] = i;
            }
        }
        for (x = 0; x < d; x++)
        {
            for (y = 0; y < d; y++)
            {
                printf("%-4d", a[x][y]);
            }
            printf("\n");
        }
    }
    else if (d % 2 == 0 && d % 4 != 0) /* 单偶数阶 */
    {
        int x1, x2, y1, y2, n;
        i = 1;
        for (x = 1; x <= d; x++)
            for (y = 1; y <= d; y++)
                a[x][y] = i++;

        n = (d - 2) / 4;
        x1 = y1 = n + 1;
        x2 = y2 = n * 3 + 2;

        for (e = 1; e <= d; e++)
        {
            for (f = 1; f <= d; f++)
                printf("%-4d", a[e][f]);
            printf("\n");
        }
        printf("n=%d,x1=%d,x2=%d,y1=%d,y2=%d\n\n", n, x1, x2, y1, y2);

        for (x = 1; x <= d / 2; x++)
        {
            for (y = 1; y <= d; y++)
            {
                if ((y > y1 && y < y2 && x < x1) || (y < y1 && x > x1 && x < x2) || (y > y2 && x > x1 && x < x2))
                {
                    e = d + 1 - x;
                    f = d + 1 - y;
                    i = a[x][y];
                    a[x][y] = a[e][f];
                    a[e][f] = i;
                }
            }
        }
        for (e = 1; e <= d; e++)
        {
            for (f = 1; f <= d; f++)
                printf("%-4d", a[e][f]);
            printf("\n");
        }
        printf("\n");

        i = a[x1][1];
        a[x1][1] = a[x1][d];
        a[x1][d] = i;

        i = a[x2][1];
        a[x2][1] = a[x2][d];
        a[x2][d] = i;

        i = a[n + 2][1];
        a[n + 2][1] = a[n + 2][d];
        a[n + 2][d] = i;

        for (f = y1 + 1; f < y2; f++)
        {
            i = a[x1][f];
            a[x1][f] = a[x2][f];
            a[x2][f] = i;
        }

        for (x = 1, e = d; x < e; x++, e--)
        {
            if (x != x1 && e != x2)
            {
                i = a[x][y1];
                a[x][y1] = a[e][y1];
                a[e][y1] = i;
            }
        }
        for (e = 1; e <= d; e++)
        {
            for (f = 1; f <= d; f++)
                printf("%-4d", a[e][f]);
            printf("\n");
        }
        printf("\n");

        for (e = x1 + 1; e < x2; e++)
        {
            if (e != 2 * n + 1)
            {
                i = a[e][y1];
                a[e][y1] = a[e][y2];
                a[e][y2] = i;
            }
        }

        i = a[x1][1];
        a[x1][1] = a[x2][1];
        a[x2][1] = i;

        for (y = y1 + 1, f = y2 - 1; y < f; y++, f--)
        {
            i = a[x1][y];
            a[x1][y] = a[x1][f];
            a[x1][f] = i;
        }
        for (e = 1; e <= d; e++)
        {
            for (f = 1; f <= d; f++)
                printf("%d  ", a[e][f]);
            printf("\n");
        }
        printf("\n");

        for (y = 2, f = d - 1; y < y1; y++, f--)
        {
            i = a[x1][y];
            a[x1][y] = a[x1][f];
            a[x1][f] = i;
        }
        for (e = 1; e <= d; e++)
        {
            for (f = 1; f <= d; f++)
                printf("%d  ", a[e][f]);
            printf("\n");
        }
        printf("\n");
    }
}