//
//  Funcao Principal.cpp
//  Exercicios
//
//  Created by Marco Antonio Guarachi Poma on 5/7/21.
//

#include <stdio.h> //include<biblioteca> Standar Imput Output
int main () //funçao principal
{
    int minhaIdade; //numero inteiro -1,-2 nada que tenga decimal Variavel
    minhaIdade = 39; //Valor da Variavel
    int paiIdade = 39; //Otra forma de escrever direto
    printf ("Minha idade é = %i.\n",minhaIdade); /* %i variable i de int
    Para definir qual variavel vai pegar ,minhaIdade)
    Si fica longo depois da , dar enter e continuar embaixo
    Si tiver treis para print so adicionar a variavel depois da , */
    
    printf("===========================================.\n");
    int inteira = 10; //Valor inteiro definido
    float decimal = 10.5; //Valor decimal definido
    char caractere = 'a'; //Segurar uma letra na variavel '?'
    printf ("%i\n", inteira);
    printf ("%f\n", decimal);
    printf ("%c\n", caractere);
/*  int num1 = 5;
    float num2 = 2;
    float resultado = num1/num2;
    
    printf("%f\n",resultado);
    */
    printf("===========================================.\n");
    int base;
    int altura;
    int area;
    
    printf("Digite o valor da base:"); // comando output
    scanf("%i", &base); // comando imput &base e
    
    printf("Digite o valor da altura:");
    scanf("%i", &altura);
    
    area = base * altura; //operacaoes matematicas *, +, /, -
    
    printf("O valor da area do retangulo e = %i \n",area);
    
    printf("============================================.\n");
    
    int idade;
    printf("Favor informar idade:\n");
    scanf("%i", &idade);
    
    if(idade <18){   //if=se a idade menor a 18
        printf("Bebidas alcoólicas não estão liberqadas.\n");
    }else{   //caso seja mayor a 18
        printf("Bebidas alcoólicas liberadas.\n");
    } //Utiliza os corchetes para quando tem varias opções
    
    printf("=============================================.\n");
    
    int i;
    printf("Insira um numero inteiro de 1 a 5\n");
    scanf("%i", &i);
    
    switch (i){  //Quao variavel queremos analizar()
        case 1: //Caso o valor da variavel i seja 1 executa printf
            printf("primeiro\n");
            break;  //pula para fora do switch
        case 2:
            printf("segundo\n");
            break;
        case 3:
            printf("terceiro");
            break;
        case 4:
            printf("quarto");
            break;
        case 5:
            printf("quinto");
            break;
        default:  //Caso digitar um valor nao existente
            printf("Opção não valida");
            break;
    }
    
    printf("=============================================.\n");
    int fatorial=10;
    int resposta=1;
    
    for(;fatorial>=1; --fatorial){ //--reducir 1
        resposta*=fatorial; //resposta=resposta*fatorial
        
    }
    printf("O numero fatorial é %i\n", resposta);
    
    printf("=============================================.\n");
    int e = 0;
    while (e != 0){  //enquanto e diferente de 0 Verifica
        printf("Teste\n"); //Control C para parar de rodar infinito Excecuta
    }
    
    do{   //faça Excecuta
        printf("Teste 2\n");
    }while (e != 0);  //enquanto Verifica
    
    printf("=============================================.\n");
    
    int contador = 1;  //= definir o valor tem o valor de 1
    
    while(contador <=5){ //enquanto (a variavel contador for menor o =5) executa
        // <5=4 !=diferente=4 ==igual->se uma coisa e igual a outra
        printf("%i\n", contador); //imprime o valor de contador na tela do usuario
        ++contador;   //adiciona 1 a valor de contador se tira isso faz lup infinito
    }
    printf("=============================================.\n");
    
    int contador;
    int numero=1;
    
    for (contador=1; contador<=10; contador=contador+1){ //para imprimir 10 veces
        printf ("teste\n");
        printf ("brasil\n");
    }
    
    
 return 0; //
}
