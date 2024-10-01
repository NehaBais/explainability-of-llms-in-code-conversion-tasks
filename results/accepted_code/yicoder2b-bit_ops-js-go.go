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