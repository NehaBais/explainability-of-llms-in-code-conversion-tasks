package main

import (
    "fmt"
)

func bitwise(a, b int){
  // AND operation
  fmt.Println("a AND b:", a & b)
  // OR operation
  fmt.Println("a OR b:", a | b)
  // XOR operation
  fmt.Println("a XOR b:", a ^ b)
  // NOT operation
  fmt.Println("NOT a:", ^a)
  // Left shift operation
  fmt.Println("a << b:", a << b)
  // Arithmetic right shift operation (sign preserving)
  fmt.Println("a >> b:", a >> b)
  // Logical right shift operation (zero filling)
  fmt.Println("a >>> b:", uint32(a) >> uint(b))
   // Rotate left
  fmt.Println("a rol b: ", (a<<b)|(a>>>(32-b))) 
  // Rotate right
  fmt.Println("a ror b: ", (a>>b)|(a<<(32-b))) 
}