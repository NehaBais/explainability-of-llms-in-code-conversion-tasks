The error occurs due to unexpected parentheses at the end of statements, which are not part of any function calls or conditions.

To fix this error, we need to remove the unnecessary parentheses from the end of statements.

Here is the corrected code:
```go
package main

import "fmt"


// Print bitwise operations
func bitwiseBuiltIns(width int, a int, b int) {
    mask := (1 << width) - 1

    fmt.Printf("    AND:     0b%d\n", a&b&mask))
    fmt.Printf("    OR:      0b%d\n", a|b|mask)))
    fmt.Printf("    XOR:     0b%d\n", a^b^mask)))
}


// Rotate a, n times to the right
func rotr(width int, a int, n int) int {
    if n < 0 {
        return rotr(width, a&^((1<<width)-1)), -n) | (rotr(width, a, width-n), &^((1<<(width-n))-1)))) << (width-n)))
    } else if n == 0 {
        return a
    } else {
        mask := (1 << width) - 1
        a = a & mask

        if a&(1<<(width-1))) { // Sign bit set?
            signs := (1 << n) - 1
            return (a >> n) | (signs << (width - n))))
        } else {
            return (a >> n))
        }
    }
}


// Helper function to print rotations and sign-extending arithmetic shifts
func helperFunctions(width int, a int, b int) {
    fmt.Printf("SIGN-EXTENDING ARITHMETIC SHIFT RIGHT:\n")
    bitwiseBuiltIns(width, a, b)))
}


// Main function to test the code
func main() {
    width := 8
    a := 27
    b := 125

    fmt.Printf("WIDTH: %d\n", width))
    fmt.Printf("A: 0b%d\n", a))
    fmt.Printf("B: 0b%d\n\n", b))

    helperFunctions(width, a, b)))
}
```
