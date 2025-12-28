/* /*, =, while(x <=>= y) {asdfasd}, *, +, -, %d, x, float */
#include <stdio.h>
/* print Fahrenheit-celsius table 
for fahr = 0, 20, ..., 300 */
int main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;     /* lower limit of temperature scale */
    upper = 300;     /* upper limit */
    step = 20;     /* step size */

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9;
        printf("%f\t%f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
