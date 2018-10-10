#include "stdio.h"


int main(){
    double epsilon = 1.0;

    while(1.0 + 0.5*epsilon != 1.0){
        epsilon = 0.5*epsilon;
    }

    printf("epsilon: %.30lf\n", epsilon);
    return 0;
}