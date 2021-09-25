//
//  test.cpp
//  Exercicios
//
//  Created by Marco Antonio Guarachi Poma on 29/6/21.
//

#include <iostream>
#include <string>

/* <tipo de retorno> <nome> (argumentos...>){
        <escopo>
}*/
void PrintTest(int x){
    x+=1;
    std::cout<<x<<"Foi o Teste! \n";
}

int main(int argc, char** argv) {
    int x=10;
    
    PrintTest(x);
    std::cout<<x<<"\n";//para no sumar 1 a x
    
    PrintTest(20);
    PrintTest(30);

    return 0;
    
}
