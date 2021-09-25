//
//  1ªAula.cpp
//  Exercicios
//
//  Created by Marco Antonio Guarachi Poma on 21/09/21.
//

#include <stdio.h>

int main (){
    
    int i, notas[5];
    int media;
    int soma = 0;
    
    for(i=0; i<5; i++){
        
        printf("Digite a nota %d: ",i+1);
        scanf("%d", &notas[i]);
        
        //printf("%d\n", notas[i]); //Pra exibir num digitado
        soma = soma + notas[i];
    }
    media = soma / 5;
    
    printf("-------------------\n");
    printf("Media: %d\n", media);
    printf("-------------------\n");
    
    return 0;
}
