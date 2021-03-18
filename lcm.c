#include <stdio.h>

void main() {
    int p, q, x;
    printf("\n\tTHE LCM CALCULATION");
    printf("\n\t____________________\n");
    printf("\nEnter the numbers:");
    scanf("%d %d", &p, &q);
    x = p > q ? p : q;
    while (1) 
	{
        if (x % p == 0 && x % q == 0) 
		{
            printf("\n\tThe LCM of the %d and %d numbers is %d.\n", p, q, x);
            break;
        }
        ++x;
    }
    
}


 
