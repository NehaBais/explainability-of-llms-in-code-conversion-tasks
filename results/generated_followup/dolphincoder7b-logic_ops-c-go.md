The error message is saying that there's no operator `&&`, `||`, or `!` defined for integers (`int` in Golang). 

To fix this, we need to use bitwise operations instead of logical ones. The reason is that the operators we're using are designed to work on boolean values but integers don't have a concept of true/false like boolean values do. Here's how you can modify your code:

```go
package main

import  "fmt"

func print_logic(a int, b int) {
    fmt.Printf("a and b is %d\n", a & b)
    fmt.Printf("a or b is %d\n", a | b)
    fmt.Printf("not a is %d\n", ^a)
}
func main()  {
    // Test
    print_logic(1, 0)
    print_logic(0, 1)
    print_logic(1, 1)
    print_logic(0, 0)
}
```

The above code works by performing bitwise operations on the input values. This means that if `a` is true, it will be represented as a 1, and if `a` is false, it will be represented as a 0. So, when we perform a logical AND operation (`&`), two bits must both be 1 for the result to be true. Similarly, when performing a logical OR operation (`|`), any bit set to 1 will make the final result true. Finally, when performing a logical NOT operation (`^`), all bits are inverted (0 becomes 1 and vice versa).

Please note that there is no built-in type for boolean in GoLang, so we're using integers to represent true/false values. However, this doesn't mean you can't have boolean variables in GoLang; it's just that they don't behave like boolean types from C, and you need to use bitwise operations when dealing with boolean variables (or `bool` as Golang calls them).
