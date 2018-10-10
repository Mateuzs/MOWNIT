#include "stdio.h";


 int main(){
    float fl1 = 0.01;
    double d1 = 0.01;
    float fl2 = 0.01;
    double d2 = 0.01;
    int i;
        printf("wyniki: ");
    for(i=0;i<1000;i++){
        float cfl1 = fl1 + 3.0*fl1*(1-fl1);
        double cd1 = d1 + 3.0*d1*(1-d1);
        float cfl2 = 4.0*fl2 - 3.0*fl2*fl2;
        double cd2 = 4.0*d2 - 3.0*d2*d2;
        fl1 = cfl1;
        d1 = cd1;
        fl2 = cfl2;
        d2 = cd2;

        printf("f1: %lf, f2: %lf, d1: %lf, d2: %lf\n", fl1, fl2, d1,d2);
    }
 }