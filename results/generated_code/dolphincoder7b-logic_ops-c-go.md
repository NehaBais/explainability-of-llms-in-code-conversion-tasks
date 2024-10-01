### Pseudocode:

FUNCTION print_logic(a, b)
    PRINT "a and b is ", a AND b
    PRINT "a or b is ", a OR b
    PRINT "not a is ", NOT a
END FUNCTION

### Code in GoLang:
```go
package main
import "fmt"
func print_logic(a int, b int) {
  fmt.Printf("a and b is %d\n", a && b)
  fmt.Printf("a or b is %d\n", a || b)
  fmt.Printf("not a is %d\n", !a)
}
func main() {
    // Test
    print_logic(1, 0)
    print_logic(0, 1)
    print_logic(1, 1)
    print_logic(0, 0)
}
```
Note: The `printf` function in Golang works slightly differently from the printf functions in C. It can take multiple arguments and uses the format string to determine how to print them. If you want to output the result of an expression, don't forget to wrap it with `%v` or `%d`. This is because `%T` outputs the type of a variable while `%v` and `%d` are used for printing values.
