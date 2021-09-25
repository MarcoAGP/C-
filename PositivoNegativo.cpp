//
//  PositivoNegativo.cpp
//  Exercicios
//
//  Created by Marco Antonio Guarachi Poma on 29/6/21.
//

#include <stdio.h>

int main(){
    int e,d,i,nro;
    int vnumeros[12]={0,0,0,0,0,0,0,0,0,0,0,0};
    e=0;
    d=9;
    for(i=0; i<10; i++){
    printf("Digite um valor");
    scanf("%d",&nro);
    if(nro<0){
        vnumeros[e]=nro;
        vnumeros[10]=vnumeros[10]+1;
        e=e+1;
    }else{
        vnumeros[d]=nro;
        vnumeros[11]=vnumeros[11]+1;
        d=d-1;
    }
}
for(i = 0; i < 10;i++){
    printf("%d ",vnumeros[i]);
}
printf("\nNegativos= %d\n",vnumeros[10]);
printf("Positivos= %d",vnumeros[11]);
    printf("\n");
return 0;
}
/*Algoritmo separar
    inicio
        inteiro vnumeros[12]
        inteiro e, d, i, nro
        e=1
        d=10
        para i = 1 ate 10 passo 1 faca
            escrever("Digite um numero")
            ler(nro)
            se(nro<0) entao
                vnumeros[e]=nro
                vnumeros[11]=vnumeros[11] + 1
                e = e + 1
            senao
                vnumeros[d]=nro
                vnumeros[11]=vnumeros[12] + 1
                d = d -1
            fimse
        fimpara
        para i = 1 ate 10 passo 1 faca
            escrever(vnumeros[i],",")
        fimpara
        escrever("Negativos=",vnumeros[11])
        escrever("Positivos=",vnumeros[12])
    fim.*/
