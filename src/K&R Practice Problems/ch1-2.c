#include <stdio.h>

int main(){
    int fahr, celsius;
    int lower, upper, step;
    
    lower = 0; /* lower limit of temp table */
    upper = 300; /* upper limit */
    step = 20; /* step size */

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}

/* Original K&R C Code:

#include <stdio.h>

main(){
    int fahr, celsius;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}

*/
