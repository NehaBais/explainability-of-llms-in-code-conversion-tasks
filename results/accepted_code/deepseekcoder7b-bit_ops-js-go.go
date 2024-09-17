package main

import (
	"fmt"
)

func bitwise(a int, b int){
   fmt.Println("a AND b: ", a & b)  // Bitwise AND
   fmt.Println("a OR b: ", a | b)   // Bitwise OR
   fmt<｜begin▁of▁sentence｜>kipfmt.Println("a XOR b: ", a ^ b)  // Bitwise XOR
   
   fmt.Println("a << b: ", a<<b) // Left shift, Go does not support bit rotation operations
   fmt.Println("a >> b: ", a>>b) // Right shift
}