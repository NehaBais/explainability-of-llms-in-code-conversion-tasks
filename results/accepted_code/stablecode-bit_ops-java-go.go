package main

import "fmt"

func bitwise(a int, b int) {

    fmt.Println("a AND b:", a&b)
    fmt.Println("a OR b:", a|b)
    fmt.Println("a XOR b:", a^b)
    fmt.Println("NOT a:", ^a)
    fmt.Println("a << b:", a<<b))     // left shift
    fmt.Println("a >> b:", a>>b))         // arithmetic right shift
    fmt.Println("a >>> b:", (uint)(a))>>>(uint(b)))) // logical right shift
    fmt.Println("a rol b:", rotateLeft(a, b)))       //rotate left, Go 1.13+
    fmt.Println("a ror b:", rotateRight(a, b)))       //rotate right, Go 1.13+
}

func rotateLeft(x int, n int) int {
    return (x << n) | (x >> (32 - n)))
}

func rotateRight(x int, n int) int {
    return (x >> n) | (x << (32 - n))))
}