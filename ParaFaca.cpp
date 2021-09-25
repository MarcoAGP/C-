//
//  LacoPara.cpp
//  Exercicios
//
//  Created by Marco Antonio Guarachi Poma on 29/6/21.
//

#include <stdio.h>
int main(){
int contador;
int tabuada;
contador=1;
printf("Digite um número para a tabuada--> ");
scanf("%d", &tabuada);
for(contador=1;contador<=10; contador++){
printf("%dX%d=%d\n",contador,tabuada,tabuada*contador);
}
return 0;
}
/*Algoritmo laco_para
    inicio
        inteiro: tabuada
        inteiro: contador
        ler(tabuada)
        para contador = 1 ate 10 passo 1 faca
            escrever(contador," x ", tabuada, "= ",tabuada * contador)
        fimpara
    fim.*/
