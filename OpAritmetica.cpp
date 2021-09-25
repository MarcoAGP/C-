//
//  OpAritmetica.cpp
//  Exercicios
//
//  Created by Marco Antonio Guarachi Poma on 29/6/21.
//

#include <stdio.h>
#include <locale.h>
int n1=20,n2=20,soma,sub,multi;

float divisao;

main(void){
    
    setlocale(LC_ALL,"Portuguese");
    
    soma=n1+n2;
    
    sub=n1-n2;
    
    multi=n1*n2;
    
    divisao=n1/n2;
    
    printf("O resultado da soma e: %i \n", soma);
    printf("O resultado da subtracao e: %i \n", sub);
    printf("O resultado da multiplicacao e: %i \n", multi);
    printf("O resultado da divisao e: %f \n", divisao);
    
}
