#include <stdio.h>
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int temp[] = {a[0],a[1]};
    for (int i = 0; i < 4; i++)
    {
        a[i] = a[i + 1];
    }
    a[4] = temp[0];
    // a[4] = temp[1];
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}