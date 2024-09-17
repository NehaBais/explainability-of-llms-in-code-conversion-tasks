GET a, b DISPLAY("sum:               ", a + b)
           DISPLAY("difference:        ", a - b)
               DISPLAY("product:           ", a *b)
                   DISPLAY("integer quotient:  ",
                           FLOOR(a / b))  // truncates towards zero
    DISPLAY("remainder:         ", a % b) // same sign as first operand