//
//  VUnidimensionalContador.cpp
//  Exercicios
//
//  Created by Marco Antonio Guarachi Poma on 29/6/21.
//

#include <stdio.h>

int main(){
    int contador;
    float vnotas[4];
    float media = 0;
    for(contador = 0; contador < 4; contador++){
        printf("Digite a nota %d-->",contador+1);
        scanf("%f",&vnotas[contador]);
    }
    for(contador = 0; contador < 4; contador++){
        media = media + vnotas[contador];
    }
    media = media/4;
    printf("Media = %.2f\n\n",media);
return 0;
}
//A media de 4 notas
