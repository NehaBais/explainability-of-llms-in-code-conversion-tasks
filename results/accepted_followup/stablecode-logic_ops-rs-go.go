package main

import "fmt"

func booleanOps(a bool, b bool) {
    fmt.Printf("The result of '%s and %s' operation is: %t\n", a, b, a && b))
    fmt.Printf("The result of '%s or %s' operation is: %t\n", a, b, a || b))
    fmt.Printf("The result of 'xor(%s, %s)' operation is: %t\n", a, b, a ^ b))
    fmt.Printf("The result of 'not(%s)' operation is: %t\n", a, !a))
}

func main() {
    booleanOps(true, true)
    booleanOps(true, false)
    booleanOps(false, true)
    booleanOps(false, false)
}