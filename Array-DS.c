#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int i = 0;
    int array[1000];
    for (i;i<n;i++)
        {
        scanf("%d ",&array[i]);
    }
    i = n-1;
    for (i;i>-1;i--)
        {
        printf("%d ", array[i]);
    } 
    return 0;
}
