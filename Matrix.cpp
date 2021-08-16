#include <stdio.h>

int main()
{

    int a;
    printf("Enter value of a of matrix A\n");
    scanf("%d", &a);

    int b;
    printf("Enter value of b of matrix A\n");
    scanf("%d", &b);

    int c;
    printf("Enter value of c of matrix A\n");
    scanf("%d", &c);

    int d;
    printf("Enter value of d of matrix A\n");
    scanf("%d", &d);

    int e;
    printf("Enter value of e of matrix A\n");
    scanf("%d", &e);

    int f;
    printf("Enter value of f of matrix A\n");
    scanf("%d", &f);

    int g;
    printf("Enter value of g of matrix B\n");
    scanf("%d", &g);

    int h;
    printf("Enter value of h of matrix B\n");
    scanf("%d", &h);

    int i;
    printf("Enter value of i of matrix B\n");
    scanf("%d", &i);

    int j;
    printf("Enter value of j of matrix B\n");
    scanf("%d", &j);

    int k;
    printf("Enter value of k of matrix B\n");
    scanf("%d", &k);

    int l;
    printf("Enter value of l of matrix B\n");
    scanf("%d", &l);


    

    int m = a * g + b*i + c * k ;
    printf("The value m in AxB= %d\n, m ");

    int n = a * h + b * j + c * l ;
    printf("The value n in  AxB= %d\n, n ");

    int o = d * g + e * i + f * k ;
    printf("The value o in AxB= %d\n, o ");

    int p = d * h + j * e + f * l; 
    printf("The value p in AxB= %d\n, p ");

    return 0;
}