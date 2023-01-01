//
// Created by S USER on 1/1/2023.
//

#ifndef ARBRE_FIBONACCITREE_H
#define ARBRE_FIBONACCITREE_H
#include "Fibonacci_Node.cpp"
#include "Arbre.cpp"
class FibonacciTree {
public:
    Arbre<Fibonacci_Node> *arbre{};
    FibonacciTree();
    long double add_fibo_node(Fibonacci_Node) const;
    long double fibonacci_of(long double );
    long double calc_fibonacci(long double );
    };


#endif //ARBRE_FIBONACCITREE_H
