#include <stdio.h>
int main() {

    int num, mult, prod;

        for (num = 0; num <= 9; num++)
        {
                printf("%d",0);

                for (mult = 1; mult <= 9; mult++)
                {
                        printf(",");
                        printf(" ");

                        prod = num * mult;

                        if (prod <= 9)
                                printf(" ");
                        else
                                printf("%d", prod/10);

                        // putchar((prod % 10) + '0');
                        printf("%d", prod%10);
                }
                printf("\n");
        }

    return 0;
}
