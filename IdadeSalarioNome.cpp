//
//  Idade_Salario_Nome.cpp
//  Exercicios
//
//  Created by Marco Antonio Guarachi Poma on 29/6/21.
//

#include <stdio.h>
#include <string.h>
#include <locale.h>
int idade;
float salario;
char nome[50];

int main(void){
    
    setlocale(LC_ALL, "Portuguese");
    
    printf("Digite a sua idade: ");
    scanf("%i", &idade);
    
    printf("Informa seu salario: ");
    scanf("%f", &salario);
    
    printf("Qual seu nome: ");
    scanf("%s", &nome[50]);
    
    printf("\nOs dados informados são:\n %i\n %2.f\n %s",idade,salario,nome);
    
}
