#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    
    int n, r, sum = 0;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    while ( n > 0 )
    {
        r = n % 10;
        sum = sum + r;
        n = n / 10;
    }
    printf("%d", sum);
    return 0;
}
