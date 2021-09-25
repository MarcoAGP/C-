//
//  Prova02.cpp
//  Exercicios
//
//  Created by Marco Antonio Guarachi Poma on 12/7/21.
//

#include <stdio.h>
/*// Online C compiler to run C program online
int main()
 {
    char resp;
    int impar = 0;
    int par = 0;
    int numero = 30;
    prinf("Iniciar a Contagem (s/n)?");
    scanf("%c",&resp);
    while((resp=='s')||(resp=='S'));
    {
        printf("Informe o numero:");
        scanf("%d", &numero);
        if(numero % 2 == 0);
        {
            par++;
        }
        else{
         impar++;
         }
         printf("Coloque outro numero: ");
         scanf("%c",&resp);
         }
         prinf("Numeros pares = %4d\n",
         par);
         prinf("Numeros impares = %4d\n",
         impar);
         return();
         }

int main()
 {
    char resp;
    int impar = 0;
    int par = 0;
    int numero = 0;
    prinf("Iniciar a Contagem (s/n)?");
    scanf("%c",&resp);
    while((resp=='s')||(resp=='S'))
    {
        printf("Informe o numero:");
        scanf("%d", &numero);
        for(numero=1; numero=<30; i++)
        if(numero % 2 == 0);
        {
            par++;
        }
        else
        {
         impar++;
         }
         printf("Coloque outro numero: ");
         scanf("%c",&resp);
         }
         prinf("Numeros pares = %4d\n",
         par);
         prinf("Numeros impares = %4d\n",
         impar);
         return();
         }

int main()
 {
    char resp;

    int numero = 0;
    prinf("Iniciar a Contagem (s/n)?");
    scanf("%c",&resp);
    while((resp=='s')||(resp=='S'))
    {
        printf("Informe o numero:");
        scanf("%d", &numero);
        for(numero=1; numero=<30; i++)
        if(numero % 2 == 0 && numero %3 == 0));
            if(numero %2 == 0)
            {
                prinf("numero %d divisivel por 2",
                numero);

                else
            {
                prinf("numero %d divisivel por 3",
                numero);
            }


        else
            prinf("numero %d não é divisivel por 2 e nem por 3",
        numero);
        {
         printf("Coloque outro numero: ");
         scanf("%c",&resp);
         }

         return();
         }

        
        int main() {
            int num;
            int numero[30];
            int contador = 1;

            printf("Informe 30 numeros positivos:\n");
            for(int i=1;i<=5;i++){
                printf("Informe o %dº numero:",i);
                scanf("%d",&num);

                if((num % 2 == 0) && (num % 3 == 0)){
                    numero[contador] = num;
                    contador++;
                }
            }
            printf("Numeros divisíveis por números par e impar informados pelo usuario\n");
            for(int i=1;i<=contador;i++){
                printf("%i",&numero[i]);
            }

            return 0;
        }
Este corre
#include <stdio.h>

int main() {
    int num;
    int numero[30];
    int contador = 0;

    printf("Informe 30 numeros positivos:\n");
    for(int i=1;i<=30;i++){
        printf("Informe o %dº numero:",i);
        scanf("%d",&num);

    if(num != 0){
            if((num % 2 == 0) && (num % 3 == 0)){
                numero[contador] = num;
               contador++;
            }
    }
    }
    printf("Numeros divisíveis por números par e impar informados pelo usuario\n");
    for(int i=0;i<=contador-1;i++){
        printf("%d\n",numero[i]);
    }

    return 0;
}
*/
/*
#include <stdio.h>

int main(){
    char resp;
    int maior=0;
    int menor=0;
    int idade=0;
    
    printf("Iniciar contagem(s/n)?");
    scanf("%c",&resp);
while((resp=='s')||(resp=='n'))
{
    printf("Informe a idade:");
    scanf("%d",&idade);
    if(idade>=18){
        maior++;
    }else{
        menor++;
    }
    printf("Continuar contagem (s/n)?\n");
    scanf("%c",&resp);
}
printf("Maior numero= %4d\n",maior);
printf("Menor numero= %4d\n",menor);
return 0;
}

    
    /*
    int e,d,i,nro;
    int vnumeros[12]={0,0,0,0,0,0,0,0,0,0,0,0};
    e=0;
    d=9;
    int total;
    
    for(i=0; i<10; i++){
    printf("Digite um valor");
    scanf("%d",&nro);
    if(nro<0){
        vnumeros[e]=nro;
        vnumeros[10]=vnumeros[10]+1;
        e=e+1;
    }else{
        vnumeros[d]=nro;
        vnumeros[11]=vnumeros[11]+1;
        d=d-1;
    }
}
for(i = 0; i < 10;i++){
    printf("%d ",vnumeros[i]);
}
    
    total=e+d+1;

printf("\nNegativos= %d\n",vnumeros[10]);
printf("Positivos= %d",vnumeros[11]);
printf("\nTotal= %d",total);
printf("\n");
     
return 0;
}
*/

#include <stdio.h>

int main() {
   int numdigitado;
    char resp;
    int contador = 0;
    int positivo = 0;
    float perc_positivo;
    int negativo = 0;
    float perc_negativo;
    int somap = 0;
    int soman = 0;

    do
    {
        printf("Informe um valor: ");
        scanf("%d", &num);

        contador++;
        if(num >= 0){
            positivo++;
            somap = somap + num;
        } else if(num < 0){
            negativo++;
            soman = soman + num;
        }

        printf("Continuar contagem (s/n)?\n");
        scanf("%c",&resp);

    }while((resp=='S')||(resp=='s'));

    if((resp=='n')||(resp=='N')){
         perc_positivo = (positivo / contador) * 100;
        perc_negativo = (negativo / contador) * 100;

        printf("Percentual de números positivos informados: %f\n", perc_positivo);
        printf("Percentual de números negativos informados: %f\n", perc_negativo);

        if(perc_negativo > perc_positivo){
            printf("A maior soma dos números negativos informados: %d\n", soman);
        }else if(perc_positivo > perc_negativo){
            printf("A maior soma dos números positivos informados: %d\n", somap);
        }

        printf("Total de números digitados pelo usuário: %d",contador);
    }
    return 0;
}


