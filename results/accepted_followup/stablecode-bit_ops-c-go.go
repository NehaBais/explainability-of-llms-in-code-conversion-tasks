package main

import "fmt"

func bitwise(a int, b int) {
    fmt.Printf("a and b: %d\n", a&b))
    fmt.Printf("a or b: %d\n", a|b))
    fmt.Printf("a xor b: %d\n", a^b))
    fmt.Printf("not a: %d\n", ^a))
    fmt.Printf("a << n: %d\n", a<<b))
    fmt.Printf("a >> n: %d\n", a>>b))
}

func main() {
    bitwise(10, 2)
}