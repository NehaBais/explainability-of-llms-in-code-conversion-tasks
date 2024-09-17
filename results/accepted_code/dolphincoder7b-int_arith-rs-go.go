GET_INTEGERS():
    x = read integer from user
    y = read integer from user

    RETURN (x, y)

DISPLAY_OPERATIONS(x, y):
    sum = x + y
    difference = x - y
    product = x * y
    quotient = x / y  // truncates towards zero
    remainder = x % y  // same sign as first operand

    if (exponentiation operator exists):
        exponentiation = x ^ y

    PRINT "sum:", sum
    PRINT "difference:", difference
    PRINT "product:", product
    PRINT "quotient:", quotient
    PRINT "remainder:", remainder
    IF (exponentiation operator exists):
        PRINT "exponentiation:", exponentiation