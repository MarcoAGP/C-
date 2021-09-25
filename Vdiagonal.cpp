//
//  Vdiagonal.cpp
//  Exercicios
//
//  Created by Marco Antonio Guarachi Poma on 29/6/21.
//

#include <stdio.h>

int main() {
    int m[3][3];
    int i;
    int j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&m[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<3;i++){
        printf("%d ",m[i][i]);
        printf("\n");
    }
    return 0;
}
