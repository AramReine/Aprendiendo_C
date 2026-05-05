#include <stdio.h>
#include <math.h>
int suma(int a, int b){
    return a+b;
}
int resta(int a, int b){
    return a-b;
}
int mult(int a, int b){
    return a*b;
}
int div(int a, int b){
    return a/b;
}
int pot(int a, int b){
     int c = pow(a,b);
    return c;
}
int residuo(int a, int b){
    return a%b;
}
void comparar(int a, int b){
    
    if (a>b){
        printf("%d es mayor que %d",a,b);
    }else if (a<b){
        printf("%d es mayor que %d",b,a);
    } else{
        printf("Ambos números son iguales");
    }
    return;
}
void num(int a, int b){
    int aux;
    if (a>b){
        aux = a;
        a = b;
        b = aux;
    }
    for (int i = a; i <=b; i++)
    {
        printf("%d",i);
    }
    return;
}