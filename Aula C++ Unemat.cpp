//
//  Aula C++ Unemat.cpp
//  Exercicios
//
//  Created by Marco Antonio Guarachi Poma on 5/7/21.
//

#include <stdio.h>

int main(){
    float nota=0;
    int valor=13;
    printf("Informe uma nota: ");
    scanf("%f",&nota);
    if((nota<0)||(nota>10)){
        printf("\n nota valida");
    }else{
        printf("\n nota valida");
    }
    if(!(valor%2)){   //inverção do resultado
        printf("\n npar");
    }else{
        printf("\n impar \n");
    }
    return 0;
}
