//
// Created by S USER on 1/1/2023.
//

#ifndef ARBRE_FIBONACCI_NODE_H
#define ARBRE_FIBONACCI_NODE_H
#include <bits/stdc++.h>


class Fibonacci_Node {
public :
    long double n{};
    long double Un{};
    explicit Fibonacci_Node(long double ,long double );
    Fibonacci_Node();
    friend std::ostream &operator<<(std::ostream &,Fibonacci_Node  );
    bool operator==(Fibonacci_Node ) const;
    bool operator!=(Fibonacci_Node ) const;
    bool  operator>(Fibonacci_Node ) const;
    bool  operator<(Fibonacci_Node ) const;
    Fibonacci_Node& operator=(const Fibonacci_Node& f);

};


#endif //ARBRE_FIBONACCI_NODE_H
