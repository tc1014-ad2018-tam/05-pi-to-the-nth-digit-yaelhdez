//Carlos Yael Hernandez Alcala
//A01412016
//A01412016@ITESM.MX

#include <stdio.h>
#include "math.h"
int main() {
    int decimals=0; //Declaration of variable "Decimals"
    double pi=0; //Declaration of variable "pi"

    printf ("Give me the numbers of decimals to see: ");
    scanf("%d",&decimals); //Variable "Decimal" Request


    for(int i=0;i<=decimals; i++) { //This for control all the process
        pi +=(pow(16.0,-i))*((4.0/((8*i)+1))-(2.0/((8*i)+4))-(1.0/((8*i)+5))-(1.0/((8*i)+6))); //Form of The Nth digit of pi
    }

    printf("The value of pi at the place %d is: %.*f",decimals,decimals,pi); //Output of the Nth digit of pi

    return 0;
}