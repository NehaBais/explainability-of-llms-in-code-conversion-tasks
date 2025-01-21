package main

import "fmt"

func bitwise(a int, b int) {
    fmt.Printf("a AND b: 
%d 
\n", (a & b)))
    fmt.Printf("a OR b: 
%d 
\n", (a | b)))
    fmt.Printf("a XOR b: 
%d 
\n", (a ^ b)))
    fmt.Printf("NOT a: 
%d 
\n", ~a))
    fmt.Printf("a << b: 
%d 
\n", (a << b)))
    fmt.Printf("a >> b: 
%d 
\n", (a >> b)))
    fmt.Printf("a >>> b: 
%d 
\n", (a >>> b))))
}