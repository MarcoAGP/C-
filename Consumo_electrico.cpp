//
//  Consumo_electrico.cpp
//  Exercicios
//
//  Created by Marco Antonio Guarachi Poma on 29/6/21.
//

#include<stdio.h>
int main(){
    float consumo;
    
    printf("Informe o consumo em Kwh/mes");
    scanf("%f",&consumo);
    if(consumo<0){
        consumo=consumo*(-1);
    }
    if(consumo==0){
        printf("Aparelho desligado");
    }else{
        if(consumo<=30){
            printf("Classe A");
        }else{
            if(consumo>30  && consumo <=45){
                printf("Classe B");
            }else{
                if(consumo>45 && consumo <=55){
                    printf("Classe C");
                }else{
                    if(consumo>55 && consumo<=60){
                        printf("Classe D");
                    }else{
                        printf("Classe E");
                    }
                }
            }
        }
    }
    return 0;
}
