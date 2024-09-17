package main

import "fmt"

func bitwise(a int, b int) {
    // Performing a bitwise AND operation between 'a' and 'b'.
    fmt.Printf("a AND b: %d \n", (a & b)))

    // Performing a bitwise OR operation between 'a' and 'b'.
    fmt.Printf("a OR b: %d \n", (a | b))))

    // Performing a bitwise XOR operation between 'a' and 'b'.
    fmt.Printf("a XOR b: %d \n", (a ^ b))))

    // Performing a bitwise NOT operation on variable 'a'.
    fmt.Printf("NOT a: %d \n", ~a))

    // Performing a left shift operation between 'a' and 'b'. 
    // Note that Golang does not support shifting variables with negative values. For this code, the second integer 'b' should be positive to avoid any unexpected behavior.
    fmt.Printf("a << b: %d \n", (a << b))))

    // Performing a right shift operation between 'a' and 'b'. 
    // Note that Golang does not support shifting variables with negative values. For this code, the second integer 'b' should be positive to avoid any unexpected behavior.
    fmt.Printf("a >> b: %d \n", (a >> b))))

    // Performing a right arithmetic shift operation between 'a' and 'b'. 
    // Note that Golang does not support shifting variables with negative values. For this code, the second integer 'b' should be positive to avoid any unexpected behavior.
    fmt.Printf("a >>> b: %d \n", (a >>> b))))
}