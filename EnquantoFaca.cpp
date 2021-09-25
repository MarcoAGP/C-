//
//  LacoEnquanto.cpp
//  Exercicios
//
//  Created by Marco Antonio Guarachi Poma on 29/6/21.
//

#include <stdio.h>
int main(){
int contador;
int tabuada;
contador = 1;
printf("Digite um número para a tabuada--> ");
scanf("%d", &tabuada);
while(contador<=10){
    printf("% d X %d = %d\n",contador,tabuada,tabuada*contador);
    contador = contador +1;
}
return 0;
}
//Tabla de Multiplicar
/*Algoritmo laco_enquanto
    inicio
        inteiro: tabuada
        inteiro: contador
        contador = 1
        ler(tabuada)
        enquanto (contador <=10) faca
            escrever(contador," x ", tabuada, "= ",tabuada * contador)
            contador = contador + 1
        fimenquanto
    fim.*/
