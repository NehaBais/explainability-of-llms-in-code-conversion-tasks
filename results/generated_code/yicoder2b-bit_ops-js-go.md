Sure, here is the equivalent code in Golang. Note that bitwise operators are different in Go and JavaScript but they do perform similar functionality. Also, Golang uses '&' for AND operator, '|' for OR operator, '^' for XOR operation, '~' for NOT operation, left shift '<<', right shift '>>', arithmetic right shift '>>>', and rotate 'rotate'.
```
func bitwise(a int, b int) {
    // Perform AND operation 
    AND := a & b
    log.Printf("a AND b: %d\n", AND)

    // Perform OR operation
    OR := a | b
    log.Printf("a OR b: %d\n", OR)

    // Perform XOR operation 
    XOR := a ^ b
    log.Printf("a XOR b: %d\n", XOR)

    NOT_a := ~a
    log.Printf("NOT a: %d\n", NOT_a)

    // Perform left shift operation 
    leftShift := a << b
    log.Printf("a << b: %d\n", leftShift)

    // Perform right shift operation 
    rightShift := a >> b
    log.Printf("a >> b: %d\n", rightShift)

    // Perform arithmetic right shift operation 
    rightArithmeticShift := a >> b
    log.Printf("a >>> b: %d\n", rightArithmeticShift)
}
```
Please remember that the 'rotate' operation in JavaScript is not a built-in operator in Go. It means that you cannot perform rotate operation directly like shift or right shift, you need to implement it manually by using slices.
