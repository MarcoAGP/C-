//
//  Vetor_2Valor.cpp
//  Exercicios
//
//  Created by Marco Antonio Guarachi Poma on 29/6/21.
//

#include <stdio.h>

int main ()
{
    int v1[15];
    int v2[5];
    int i;
    int j;
    
    int contnro=0;
    float percent;
    for(i=0;i<5;i++){
        printf("Digite um valor para o vetor 1 ");
               scanf("%d", &v1[i]);
        }
        for(i=0;i<5;i++){
        printf("Digite um valor para o vetor 2 ");
                scanf("%d", &v2[i]);
        }
    
        i=0;
        for(j=0; j<5; j++){
            do{
                if(v1[j]==v2[i]){
                    contnro = contnro + 1;
                    i=6;
                }else{
                    i=i+1;
                }
            }while(i<5);
            i=0;
        }
    percent=(contnro/5.0)*100;
    
    printf("\n%.2f%%\n", percent);
    return 0;
}
