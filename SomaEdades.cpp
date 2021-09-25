//
//  SomaEdades.cpp
//  Exercicios
//
//  Created by Marco Antonio Guarachi Poma on 29/6/21.
//

#include <stdio.h>
#include <locale.h>

int idade1, idade2;

main(void){
    
    printf("Informe a edade da primera pessoa: ");
    scanf("%i", &idade1);
    
    printf("Informe a edade da segunda pessoa:");
    scanf("%i", &idade2);
    
/* > mayor
   < menor
  == idade1 igual idade2
  != diferente
  5>&!=10 menor que 5 e diferente de 10 */
    
    if (idade1>18){
    //if(idade1>idade2){
        
        printf("A pessoa e maior de edade!");
    //    printf("A primeira pessoa e mais velha!");
    }else{
        printf("A pessoa e menor de idade");
    //    printf("A segunda pessoa e mais velha!");
        
    }
    
}
