#include <stdio.h>

int main(){
    int fahr;

    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0) *(fahr-32));
        return 0;
}

/* Original K&R C Code:

#include <stdio.h>

main(){
    int fahr;

    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0) *(fahr-32));
}

*/
