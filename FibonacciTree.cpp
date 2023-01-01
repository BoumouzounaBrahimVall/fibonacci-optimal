//
// Created by S USER on 1/1/2023.
//

#include "FibonacciTree.h"

FibonacciTree::FibonacciTree() {
    arbre=new Arbre<Fibonacci_Node>();
}

long double FibonacciTree::add_fibo_node(Fibonacci_Node f) const {
    arbre->add(f);
    return f.Un;
}

long double FibonacciTree::fibonacci_of(long double n) {
    if(n==1) return 1;
    if(n==0) return 0;
    if(arbre->Search(Fibonacci_Node(n,0)))
        return arbre->Search2(arbre->racine,Fibonacci_Node(n,0))->data.Un;
    return add_fibo_node(Fibonacci_Node(n,(fibonacci_of(n-2)+fibonacci_of(n-1)) )) ;
}

long double FibonacciTree::calc_fibonacci(long double n) {
    if(arbre->Search(Fibonacci_Node(n,0)))
        return arbre->Search2(arbre->racine,Fibonacci_Node(n,0))->data.Un;
    return add_fibo_node(Fibonacci_Node(n, fibonacci_of(n)));
}
