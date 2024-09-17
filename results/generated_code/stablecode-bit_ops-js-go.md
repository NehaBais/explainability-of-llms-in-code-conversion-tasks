Below is the conversion of your JavaScript function to Golang. I've provided inline comments for each operation to help understand what's going on in this piece of code. 

```go
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
```
In this converted Golang code, I have used `fmt.Printf` instead of `alert` because in a Golang application, you would typically use the built-in logger to log messages, rather than using `window.alert()` for example. 

Please note that this code assumes that both integers 'a' and 'b' are non-negative. If there is a possibility that 'a' or 'b' could be negative, additional checks and/or adjustments would need to be made in the function body.
