#include<stdio.h>

int main()
{
    int a[10], i, largest, second;

    printf("Enter 10 elements:\n");

    for(i=0;i<10;i++)
        scanf("%d",&a[i]);

    largest = second = a[0];

    for(i=1;i<10;i++)
    {
        if(a[i] > largest)
        {
            second = largest;
            largest = a[i];
        }
        else if(a[i] > second && a[i] != largest)
        {
            second = a[i];
        }
    }

    printf("Second largest element = %d", second);

    return 0;
}
