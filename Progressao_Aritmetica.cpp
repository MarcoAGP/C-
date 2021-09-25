//
//  Progressao_Aritmetica.cpp
//  Exercicios
//
//  Created by Marco Antonio Guarachi Poma on 2/7/21.
//

#include <stdio.h>
#include <locale.h>
#include <iostream>

int main(int argc, char** argv){
    int soma;
    int a1;
    int an;
    int r;
    int n;
    int opcao;
    
    printf("Escolha a opção desejada: ");
    printf("1 – Calcular soma de todos os termos da P.A ");
    printf("2 – Encontre o n-ésimo termo da sequência ");
    printf("3 – Encontre o primeiro termo da sequência ");
    printf("4 – Encontre a razão da sequência ");
    printf("5 - Sair");
    printf("opcao");
    switch(opcao){
   case 1:
    printf("Informe a n-ésima posição do termo na sequência: ");
    scanf("n");
    printf("Informe o valor do primeiro termo da sequência: ");
    scanf("a1");
    printf("Informe o valor do n-ésimo termo da sequência: ");
    scanf("an");
            myInt = soma = n*((a1+an)/2));
    printf("A soma de todos os termos da P.A é : ",soma);
            
   case 2:
    printf("Informe o valor do primeiro termo: ");
    scanf(a1);
    printf("Informe a posição do termo na sequência: ");
    scanf(n);
    printf("Informe o valor da razão");
    scanf(r);
            myInt = an = a1 + (n-1) * r);
    printf("O valor do n-ésimo termo informado é: ",an);
            
   case 3:
    printf("Informe o valor do n-ésimo termo: ");
    scanf(an);
    printf("Informe a n-ésima posição: ");
    scanf(n);
    printf("Informe o valor da razão: ");
    scanf(r);
            for(a1 = an - (n - 1) * r){
    printf("O valor do primeiro termo da sequência é: ", a1);
            }
   case 4:
    printf("Informe o valor do n-ésimo termo da sequência: ");
    scanf(an);
    printf("Informe o valor do primeiro termo da sequência: ");
    scanf(a1);
    printf("Informe a n-ésima posição");
    scanf(n);
            for(r=(an - a1)/(n - 1);
    printf("O valor da razão é de: ", r);
    fimse
   ate(opcao == 5)
            return 0;
    }
