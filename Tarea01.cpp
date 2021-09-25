//
//  PROVA.cpp
//  Exercicios
//
//  Created by Marco Antonio Guarachi Poma on 26/7/21.
//

//#include <stdio.h>
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
//TRANSPOSTA
#include<stdlib.h>
#include<time.h>
int main(){
    int tamL=4;
    int tamC=3;
    int l;
    int c;
    int mat[tamL][tamC];
    int trans[tamC][tamL];
    
    srand(time(NULL));
    
    for(l=0; l<tamL; l++){
        for(c=0; c<tamC; c++){
            mat[l][c]=rand() %500;
        }
    }
            printf("\nMatriz original:\n");
            for(l=0; l<tamL; l++){
                for(c=0; c<tamC; c++){
                    printf("%3d",mat[l][c]);
                    printf("\n");
                    
                    for(l=0; l<tamL;l++){
                        for(c=0; c<tamC;c++){
                            trans[c][l] = mat[l][c];
                        }
                    }
                    printf("\nMatriz transposta:\n");
                    for(l=0; l<tamC; l++){
                        for(c=0; c<tamL; c++){
                            printf("%3d ",trans[l][c]);
                        }
                        printf("\n");
                    }
    return 0;
}
 */
/*
 //MATRIZ TRANSPOSTA CORREGIDO
#include <stdio.h>
int main(){
    int mat[4][3];
    int l=0;
    int c=0;

    printf("Informe os 12 numeros da matriz: \n");
    for (l=0; l<4; l++){
        for (c=0; c<3; c++){
            printf("[%i,",l);
            printf("%i]= ",c);
            scanf("%i", &mat[l] [c]);
            }
    }
    printf("\nMatriz de Entrada: \n");
    for (l=0; l<4; l++){
        for (c=0; c<3; c++){
            printf("%i ", mat[l] [c] );
        }
        printf("\n");
    }
    printf("Matriz transposta: \n");
    for (int l=0; l<3; l++){
        for (int c=0; c<4; c++){
            printf("%i ", mat[c] [l]);
        }
        printf("\n");
    }
    return 0;
}
*/
/*
#include <stdio.h>

int main(){
    int matriz1[3][4];
    int matriz2[4][3];
    int i, j;

    for (i=0; i<3; i++)
    {
        for (j=0; j<4; j++){
            printf ("Digitar valores [%d][%d] para as matrizes\n", i, j);
            scanf ("%d", &matriz1[i][j]);
        }
    }
    for (i=0; i<3; i++){
          for (j=0; j<4; j++) {
            printf("%d\t", matriz1[i][j]);
          }
          printf("\n");
    }
    for (i=0; i<4; i++){
            for (j=0; j<3; j++){
                matriz2[i][j]=matriz1[j][i];
            }
    }
    for (i=0; i<4; i++){
          for (j=0; j<3; j++) {
            printf("%d\t", matriz2[i][j]);
          }
          printf("\n");
    }
    return (0);
}
*/

#include <stdio.h>
int main() {
float Matr[10];
float Somam = 0;
float Mediam;
float Med;
float Dif;
int i;
float Somads = 0;
float Mediads;
float vtajuste[10];
 for(i = 0; i < 10; i++){
printf("Informe o %iº valor para o vetor: ", i+1);
scanf("%f", &Matr[i]);
Somam+=Matr[i];
 }
 Mediam = Somam/10;
 printf("\nO valor que representa a media dos 10 valores é: ");
 scanf("%f", &Med);
 if(Med != Mediam){
printf("\nMédia informada diferente da real, Ajustando valores...\n");
Dif = Med-Mediam;
for(i = 0; i < 10; i++){
vtajuste[i] = Matr[i] + Dif;
Somads+=vtajuste[i];
}
 Mediads = Somads / 10;
 printf("\nMostrando os valores originais do vetor:\n");
 for(i=0; i<10; i++){
printf("%.2f ", Matr[i]);
 }
 printf("\n\nMedia dos valores digitados originalmente: %.2f", Mediam);
 printf("\nOs Valores ajustados do vetor são:");
 for(i = 0; i < 10; i++){
printf("%.2f ", vtajuste[i]);
 }
 printf("\nMédia dos valores do vetor ajustado: %.2f \n", Mediads);
 }else{
 printf("\n\nMedia informada confere:");
 printf("\nMostrando os valores digitados:\n");
 for(i=0;i<10;i++){
printf("%.2f ", Matr[i]);
 }
 printf("\nMédia dos valores do vetor ajustado: %.2f ", Mediam);
 }
 return 0;
}

 /*
//MATRIZ COMPOSTA RODA
#include <stdio.h>
int main(){
    int mat[4][3];
    int l;
    int c;

    printf("Informe os 12 numeros da matriz: ");
    for (l=0; l<4; l++){
        for (c=0; c<3; c++){
            scanf("%i ", &mat[l] [c]);
        }
    }
    printf("Matriz de Entrada: \n");
    for (l=0; l<4; l++){
        for (c=0; c<3; c++){
            printf("%i ", mat[l] [c] );
        }
        printf("\n");
    }
    printf("Matriz transposta: \n");
    for (int l=0; l<3; l++){
        for (int c=0; c<4; c++){
            printf("%i ", mat[c] [l]);
        }
        printf("\n");
    }
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
   
       for(int m=0; m<5; m++){
           for (int n=0; n<5; n++){
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
/*
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
*/
