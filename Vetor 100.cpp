//
//  Vetor 100.cpp
//  Exercicios
//
//  Created by Marco Antonio Guarachi Poma on 12/7/21.
//

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int v[100], i, maior, menor;
    float media=0, pares=0, perPares;
printf("\nDigite os 100 valores do vetor:\n");
for (i=0; i<100; i++)
    scanf("%d", &v[i]);
maior = v[0];
menor = v[0];
for (i=1; i<100; i++) {
    if (v[i] > maior)
maior = v[i];
if (v[i] < menor)
menor = v[i];
media += v[i];
if ((v[i] % 2) == 0)
        pares++;
}
perPares = (pares / 100);
media = media / 100;
printf("\nMaior elemento do vetor: %d\n", maior);
printf("\nMenor elemento do vetor: %d\n", menor);
printf("\nMedia dos elemento do vetor: %.2f \n", media);
printf("\nPorcentagem de numeros pares: %.2f \n", perPares);
}
