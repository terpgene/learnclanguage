#include <stdio.h>

int main(){
    printf("Start of Cedi Converter\n");

    float cedi, dollar, exchangeRate;

    printf("\n");
    printf("*********CALCULATING THE EXCHANGE RATE*********\n");
    dollar = 760.00;
    exchangeRate = 5.72;

    /* Exchange rate conversion */

    cedi = dollar * exchangeRate;
    printf("Exchange Rate for %f\tis %f Cedis\n", dollar, cedi);
    printf("Thanks for playing along\n");
    




}