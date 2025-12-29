/* %xnumber */
#include <stdio.h>

int main() {
    float counter;

    counter = 0;

    while (counter < 1000) {
        printf("%4.2f\n", counter);
        counter = counter * (counter+1) + 1;
    } 
}