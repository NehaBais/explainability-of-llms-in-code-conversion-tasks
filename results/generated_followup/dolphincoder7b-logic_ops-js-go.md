The error occurs because Go does not have a `print` function, nor does it support JavaScript's `console` object. In order to print text in Go, you can use the `fmt.Printf` method instead of `print`. The `!` operator is used for negating boolean values, and the `&&` and `||` operators are short-circuiting boolean expressions in Go.

When compiling the code, you will need to declare a main function and remove unnecessary semicolons from each line of code. Here is how to do it:

```go
package main
import  "fmt"
func main() {
  Logic(true, false);
}
func Logic(a, b bool)  {
	fmt.Printf("%v AND %v:  %v\n", a, b, a && b)
	fmt.Printf("%v OR  %v:  %v\n", a, b, a || b)
	fmt.Printf("NOT  %v:  %v\n", a, !a)
}
```
