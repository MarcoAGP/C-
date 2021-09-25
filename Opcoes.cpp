//
//  Opcoes.cpp
//  Exercicios
//
//  Created by Marco Antonio Guarachi Poma on 29/6/21.
//

#include <stdio.h>
#include <locale.h>

int opcao;

main(void){
    
    setlocale(LC_ALL,"Portuguese");
    
    printf("Informe a opcao desejada \n");
    printf("1 - Mostre a data atual \n");
    printf("2 - Mostre em que ano estamos \n");
    printf("3 - Encerrar o programa \n");
    printf("Opcao:");
    scanf("%i",&opcao);
    
    switch(opcao){
        case 1:
            
        printf("06/06/2021");
            
        break;
            
        case 2:
                
        printf("2021");
            
        break;
            
        case 3:
                
        break;
                        
    }
    
}
