//
//  Sequencia_Fibonaci.cpp
//  Exercicios
//
//  Created by Marco Antonio Guarachi Poma on 2/7/21.
//

#include <iostream>
#include <string>

using namespace std;

int Fibonacci(int, int, int);

int main()
{
    long long number;
    
    cout << "Fibonacci" << endl;
    
    for (int i = 0; i < 9; i++)
    {
        number = Fibonacci(1, 1, i + 1);
        
        cout << number << endl;
    }
    
    
    return 0;
}

int Fibonacci (int first, int second, int position)
{
    if (position == 1)
    {
        return first;
    }
    else if (position == 2)
    {
        return second;
    }
    else
    {
        return Fibonacci(first, second, position - 1) + Fibonacci(first, second, position - 2);
    }
}
