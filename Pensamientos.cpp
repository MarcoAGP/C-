//
//  Pensamientos.cpp
//  Exercicios
//
//  Created by Marco Antonio Guarachi Poma on 11/7/21.
//

#include <stdio.h>
/*
int main() {
    int num;
    char resp;
    int contador = 0;
    int positivo = 0;
    float perc_positivo;
    int negativo = 0;
    float perc_negativo;
    int somap = 0;
    int soman = 0;

    do{
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
*/

int main()
{
    int numero;
    int ingresados=0;
    int somapos;
    int somaneg;
    float promediopos;
    float promedioneg;
    int porcentagepos;
    int porcentageneg;
    int positivo=0;
    int negativo=0;

printf("Digite o número ou pressione 0 para finalizar: ");
    scanf("%i",&numero);
while (numero != 0)
    {
        
    if(numero > 0){
            positivo++;
            //somap = somap + num;
            somapos = somapos + numero;
    } else if(numero < 0){
            negativo++;
            //soman = soman + num;
            somaneg = somaneg + numero;
    }
    // acumulador
    ingresados=ingresados+1 ; // contador
    printf("Digite o número ou pressione 0 para finalizar: ");
    scanf("%i",&numero);
    }
promediopos = somapos / positivo;
promedioneg = somaneg / negativo;
porcentagepos = (positivo/ingresados)*100;
porcentageneg = (negativo/ingresados)*100;
    
    printf("\n Percentual de números positivos informados é: %i ",porcentagepos);
    printf("\n Percentual de números negativos informados é: %i ",porcentageneg);
    printf("\n A somatoria dos números positivos é: %i",somapos);
    printf("\n A somatoria dos números negativos é: %i",somaneg);
    printf("\n Total de números digitados pelo usuário é: %i \n",ingresados);

return 0;
    
}
/*
int main() {
   int num;
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


        printf("Continuar contagem (s/n)?");
        scanf("%c",&resp);


    }while(resp=='S'|resp=='s');

    if((resp=='n'|resp=='N')){
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
*/
