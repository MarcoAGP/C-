//
//  Nota_5Alunos.cpp
//  Exercicios
//
//  Created by Marco Antonio Guarachi Poma on 29/6/21.
//

#include <stdio.h>

int main(void){
    
    int i, aprovados=0, reprovados=0;
    float notas[5];
    
    for(i=0; i<=4; i++){
    
    printf("Informe as notas dos 5 alunos da turma c:");
    scanf("%f",&notas[i]);
    
    if(notas[i] > 6){
        aprovados=aprovados+1;
}else{
    reprovados=reprovados+1;
    }
}
    printf("\nExibindo os valores do vetor:\n");
    for(i=0; i<=4; i++){
        printf("notas[%i] = %.1f \n",i,notas[i]);
    }
    
    printf("\n total de alunos aprovados e de: %i \n", aprovados);
    printf("\n total de alunos reprovados e de: %i \n", reprovados);
    
    return 0;
}
