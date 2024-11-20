# include<stdio.h>
# include<cs50.h>

int main(void){
    int star;
    int find;
    int suma;
    int opc;
    do{
    suma=0;
    star=0;
    find=0;
    do{
        star=get_int("Ingresa el rango de inicio: ");
    }
    while(star<0);
    do{
        find=get_int("Ingresa el rango de final: ");
        if (find < star)
        {
        printf("El rango final debe ser mayor o igual al rango de inicio. Intenta de nuevo.\n");
        }
    }
    while(find < star);
    opc = get_int("Ingrese segun corresponda\n\n[1]Numeros Pares\n[2]Numeros Impares\n[3]TODOS\n[4]Salir\n");

    if(opc==1)
    {
        for (int i = star; i <= find; i++)
        {
            if (i % 2 == 0)
            {
            printf("%d\n", i);
            suma=suma+i;
            }
        }
    }
    else if(opc==2)
    {
        for (int i = star; i <= find; i++) {
            if (i % 2 != 0)
            {
                printf("%d\n", i);
                suma=suma+i;
            }
         }
    }
    else if(opc==3)
    {
       for(int i = star; i <=find; i++)
       {
            printf("%i \n", i);
            suma=suma+i;
       }
    }
    else if(opc==4){
        break;
    }
    printf("la suma de los numeros es de %i \n", suma);
    }while(opc !=4);
}
