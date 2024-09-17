package main

import "fmt"

func bitwise(a int, b int) {

    fmt.Printf("a and b: %d\n", a&b))
    fmt.Printf("a or b: %d\n", a|b))
    fmt.Printf("a xor b: %d\n", a^b))
    fmt.Printf("not a: %d\n", ^a))
    fmt.Printf("a << n: %d\n", a<<b))
    fmt.Printf("a >> n: %d\n", a>>b))
    c := uint(a)

    // convert the signed integer into unsigned, so it will perform logical shift 
    fmt.Printf("c >> b: %d\n", c>>uint(b))) // logical right shift 

    return
}

func main() {
    bitwise(10, 2)
}