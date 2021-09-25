//
//  test1.cpp
//  Exercicios
//
//  Created by Marco Antonio Guarachi Poma on 29/6/21.
//

#include <iostream>
#include <string>

// <tipo de retorno> <nome> (argumentos...>){
//        <escopo>
//}
int MySum(int x, int y){
    return x+y;
}

int main(int argc, char** argv) {
    int x=10;
    int y=10;
    
    int z;//x+y
    z = MySum(x, y);
    
    std::cout<<z<<"\n";

    return 0;
}
