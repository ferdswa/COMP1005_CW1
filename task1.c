#include <stdio.h>

int drake_equation(double,double,int,double,double,double,int);

int main(int argc, char **argv)
{
    int result;
    result = drake_equation(1.0,0.2,1,1.0,1.0,0.1,1000);
    printf("N=%d R*=%.1f fp=%.1f ne=%d fl=%.1f fi=%.1f fc=%.1f L=%d\n",result,1.0,0.2,1,1.0,1.0,0.1,1000);
    result = drake_equation(1.0,0.5,5,1.0,1.0,0.2,1000000000);
    printf("N=%d R*=%.1f fp=%.1f ne=%d fl=%.1f fi=%.1f fc=%.1f L=%d\n",result,1.0,0.5,5,1.0,1.0,0.2,1000000000);
    result = drake_equation(1.5,1.0,3,1.0,0.0001,0.001,304);
    printf("N=%d R*=%.1f fp=%.1f ne=%d fl=%.1f fi=%.1f fc=%.1f L=%d\n",result,1.5,1.0,3,1.0,0.0001,0.001,304);
    result = drake_equation(3.0,1.0,5,1.0,1.0,0.1,10000000);
    printf("N=%d R*=%.1f fp=%.1f ne=%d fl=%.1f fi=%.1f fc=%.1f L=%d\n",result,3.0,1.0,5,1.0,1.0,0.1,10000000);
    return 0;
}

int drake_equation(double R, double fp, int ne, double fl, double fi, double fc, int L)
{
    int result = R*fp*ne*fl*fi*fc*L;
    return result;
}
