Here's the equivalent Golang code that meets the requirements you specified:
```
package main
import "fmt"
func main() {
 s := ", World"
 s = "Hello" + s
 fmt.Println(s)
}
```
In this example, we first declare a string variable `s` and assign it the value of `", World"`. Then, we prepend the string literal `"Hello"` to `s` using the concatenation operator `+`, and store the result back in `s`. Finally, we print the value of `s` to the console using the `fmt.Println()` function.

