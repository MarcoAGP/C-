//
//  VetoresArray.cpp
//  Exercicios
//
//  Created by Marco Antonio Guarachi Poma on 19/7/21.
//

#include <stdio.h>

 // INTRODUÇÃO A ARRAY
/*
int main (void){
    int notaPedro; //declarar as variaves
    int notaMarco;
    int notaMichele;
*//*
    int nota[10]; // a variavel tipo inteira tivese 5 blocos dentro dela
    
    nota[0] = 10; //para accesar o primeiro sempre e 0
    nota[1] = 5;
    nota[2] = 4;
    nota[3] = 2;
    nota[4] = 7;
    
    printf("%i\n", nota[4]);
    
}
*/
/*
// ARRAY DECLARAÇÃO

int main(void){
    
    int vetor[5];
    
    vetor[0] = 10;
    vetor[1] = 5;
    vetor[2] = 4;
    vetor[3] = 2;
    vetor[4] = 7;
    
    for (int i=0; i<5; ++i){
        printf("%i\n", vetor[i]);
        
    }
    
    
    return 0;
    
//    System("pause"); Para quem roda em DevC++
}
*/

/*
//MANIPULANDO ARRAY
int main(void){
    float notas[5] = {0};
    float total = 0;
    float media = 0;
    
    printf("Insira 5 notas:\n");
    
    for (int i=0; i<5; i++)
        scanf("%f", &notas[i]);
    
    for (int i=0; i<5; i++)
        total+= notas [i];
    
    media = total/5;
    
    printf("A media do aluno e %f", media);
    
    return 0;
   }
*/
/*
//MANIPULANDO ARRAYS BIDIMENCIONAIS
int main(void){
    
    int matriz[5][5] = {{ 1,  2,  3,  4,  5},
                        { 6,  7,  8,  9, 10},
                        {11, 12, 13, 14, 15},
                        {16, 17, 18, 19, 20},
                        {21, 22, 23, 24, 25}};
    
        for(int m=0; m<5; ++m){
            for (int n=0; n<5; ++n){
                printf("%i ",matriz[m][n]);
            }
            printf("\n");
        }
    
    return 0;
}
*/
/*
//EXERCICIOS
int main(void){
    
    const int bimestresAnuais = 4;
    const int numeroDeAlunos = 4;
    
    float notasAlunos [numeroDeAlunos][bimestresAnuais] = {0};
    float mediaAlunos [numeroDeAlunos] = {0};
    
    float media = 0;
    
    printf("Insira as 4 notas do aluno 1:\n");
    
    for (int aluno =0; aluno < numeroDeAlunos; aluno++){
        for(int notas =0; notas < bimestresAnuais; notas++){
            scanf("%f",&notasAlunos [aluno][notas]);
            
            media += notasAlunos[aluno][notas];
        }
        mediaAlunos[aluno] = media / bimestresAnuais;
        media = 0;
        printf("Insira as 4 notas do aluno %i\n",aluno+2);
    }
    for (int aluno=0; aluno<numeroDeAlunos; aluno++){
        printf("A media do aluno %i é %.2f\n",aluno+1,mediaAlunos[aluno]);
    }
    
    return 0;
}
*/
/*
//TRANSPOSTA
#include <stdlib.h>
int main(void) {
int c[3][4], transposta[4][3], i, j;
    
printf("\nDigite os 6 valores da matriz:\n");
for (i=0; i<3; i++) {
    for (j=0; j<4; j++);
        }
scanf("%d", &c[i][j]);
for (i=0; i<3; i++) {
for (j=0; j<4; j++)
    transposta[j][i] = c[i][j];
}
printf("\nElementos da matriz transposta:\n");
for (i=0; i<4; i++) {
    printf("\n");
for (j=0; j<3; j++)
    printf("%d \t", transposta[i][j]);
}
}
*/
/*
int main(){
    float v1[3];
    float v2[3];
    float v3[3];
    int i;
    
    for(i=0; i<3; i++){
    
    printf("Vetor 1 e Vetor 2");
        scanf("%f,%f",&v1[i],&v2[i]);
        //scanf("%f",&v2[i]);
        v3[i]=v1[i]+v2[i];
    }
    for(i=0; i<3; i++){
        printf("v3[%d]=%.2f+%.2f=%.2f\n",i,v1[i],v2[i],v3[i]);
    }
    return 0;
}
*/

int main(){
    char v1[3];
    char v2[3];
    char v3[3];
    int i;
    
    for(i=0; i<3; i++){
    printf("Vetor 1 e Vetor 2:");
        scanf("%c,%c",&v1[i],&v2[i]);
        //scanf("%f",&v2[i]);
    }
        for(i=0;i<3;i++){
        v3[i]=v1[i]+v2[i];
    }
    for(i=0; i<3; i++){
        printf("v3[%d]=%c+%c=%c\n",i,v1[i],v2[i],v3[i]);
    }
    return 0;
}

