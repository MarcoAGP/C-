//
//  Invertido_valor.cpp
//  Exercicios
//
//  Created by Marco Antonio Guarachi Poma on 29/6/21.
//

#include <stdio.h>

int FuncaoIvert(int x){
    int retorno,a,b,c;
    a=x/100;
    b=x%100;
    b=b/10;
    c=x%10;
    retorno=(c*100)+(b*10)+(a);
    return (retorno);
}
int main(){
    int d;
    printf("Digite o numero:");
    scanf("%d",&d);
    int res=FuncaoIvert(d);
    /*Desemvolvido por, ComputaçãoEng*/
    printf("O valor fica assim>>>%d",res);
    return 0;
}
