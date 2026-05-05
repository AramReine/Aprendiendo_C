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
        printf("%d es mayor que %d\n",a,b);
    }else if (a<b){
        printf("%d es mayor que %d\n",b,a);
    } else{
        printf("Ambos números son iguales\n");
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
        printf("%d\n",i);
    }
    return;
}
void main(void){
    
    int x;
    int y;
    int opcion;

    printf("--CALCULADORA--\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    printf("5. Potencia\n");
    printf("6. Residuo de division\n");
    printf("7. Saber si a ><= que b\n");
    printf("8. Numeros entre a y b\n");
    printf("Ingrese el numero de la opcion que desea realizar: ");
    scanf("%d",&opcion);

    switch (opcion)
    {
    case 1:
        printf("Ingrese el primer numero: ");
        scanf("%d",&x);
        printf("Ingrese el segundo numero: ");
        scanf("%d",&y);
        printf("%d + %d = %d\n",x,y,suma(x,y));
        break;
    case 2:
        printf("Ingrese el primer numero: ");
        scanf("%d",&x);
        printf("Ingrese el segundo numero: ");
        scanf("%d",&y);
        printf("%d - %d = %d\n",x,y,resta(x,y));
        break;
    case 3:
        printf("Ingrese el primer numero: ");
        scanf("%d",&x);
        printf("Ingrese el segundo numero: ");
        scanf("%d",&y);
        printf("%d x %d = %d\n",x,y,mult(x,y));
        break;
    case 4:
        printf("Ingrese el primer numero: ");
        scanf("%d",&x);
        printf("Ingrese el segundo numero: ");
        scanf("%d",&y);
        printf("%d / %d = %d\n",x,y,div(x,y));
        break;
    case 5:
        printf("Ingrese el primer numero: ");
        scanf("%d",&x);
        printf("Ingrese el segundo numero: ");
        scanf("%d",&y);
        printf("%d^(%d) = %d\n",x,y,pot(x,y));
        break;
    case 6:
        printf("Ingrese el primer numero: ");
        scanf("%d",&x);
        printf("Ingrese el segundo numero: ");
        scanf("%d",&y);
        printf("Residuo de %d / %d = %d\n",x,y,residuo(x,y));
        break;
    case 7:
        printf("Ingrese el primer numero: ");
        scanf("%d",&x);
        printf("Ingrese el segundo numero: ");
        scanf("%d",&y);
        comparar(x,y);
        break;
    case 8:
        printf("Ingrese el primer numero: ");
        scanf("%d",&x);
        printf("Ingrese el segundo numero: ");
        scanf("%d",&y);
        num(x,y);
        break;
    default:
        break;
    }
}