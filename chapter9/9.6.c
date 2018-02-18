#include<stdio.h>
void sorting(double* a,double* b,double* c);

int main(void)
{
    double a,b,c;

    scanf("%lf%lf%lf",&a,&b,&c);
    sorting(&a,&b,&c);

    printf("%.2lf.%.2lf,%.2lf\n",a,b,c);

    return 0;
}

void sorting(double* a,double* b,double* c)
{
    double d;
    
    if (*a > *b){
        d = *a;
        *a = *b;
       *b = d;
    }
    if (*b > *c){
        d = *b;
       *b = *c;
       *c = d;
    }
    if (*a > *b){
        d = *a;
        *a = *b;
        *b = d;
    }

    return ;
}
