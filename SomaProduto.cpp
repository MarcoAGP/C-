//
//  SomaProduto.cpp
//  Exercicios
//
//  Created by Marco Antonio Guarachi Poma on 29/6/21.
//

#include <stdio.h>

void SOMA(float a, int b) //basta separar os parametros por virgulas
{
    float result; //a declaracao de variaveis e igual ao que
                    //se faz na funcao main
    result = a+b;
    printf("A soma de %6.1f com %d eh %6.3f\n", a, b, result);
}

int main()
{
    int a;
    float b;
    a = 10;
    b = 12.3;
    
    SOMA(b,a); //Chamada da funcao SOMA(12.3,10);
    return 0;
    
}

// O resultado do programa e a impressao da seguinte mensagem: A soma de 12.3 com 10 e 22.300
