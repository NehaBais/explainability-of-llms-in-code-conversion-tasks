Here is the equivalent code in Golang:

```go
package main

import "fmt"

func bitwise(A, B int) {
    fmt.Println("A AND B: ", A & B)
    fmt.Println("A OR B: ", A | B)
    fmt.Println("A XOR B: ", A ^ B)
    fmt.Println("NOT A: ", ^A)
    fmt.Println("A << B: ", A << B) // left shift
    fmt.Println("A >> B: ", A >> B) // arithmetic right shift
    fmt.Println("A >>> B: ", A>>B) // logical right shift
}

func main() {
    bitwise(2, 3)
}
```
The `bitwise` function in Golang takes two integers as input. It performs a series of bitwise operations and prints the results using `fmt.Println`. The operation codes are represented by their hexadecimal values in the `fmt.Println` statements. In Golang, bitwise operations can be performed using the following syntax:

- Bitwise AND: `A & B`
- Bitwise OR: `A | B`
- Bitwise XOR: `A ^ B`
- Bitwise NOT: `^A`
- Left shift: `A << B`
- Arithmetic right shift: `A >> B`
- Logical right shift: `A>>B`
