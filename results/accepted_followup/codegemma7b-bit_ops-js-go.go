package main

import "fmt"

func bitwise(a, b int) {
   fmt.Println("a & b:", a&b)    // bitwise AND
   fmt.Println("a | b:", a|b)    // bitwise OR
   fmt.Println("a ^ b:", a^b)    // bitwise XOR
   fmt.Println("~a:", ^a)        // bitwise NOT
   fmt.Println("a << b:", a<<b)   // left shift
   fmt.Println("a >> b:", a>>b)   // arithmetic right shift
   fmt.Println("a >>> b:", a>>>b) // logical right shift
}