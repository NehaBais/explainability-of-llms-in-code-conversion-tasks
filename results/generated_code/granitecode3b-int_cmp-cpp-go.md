Sure, here's the equivalent Golang code:
```
package main
import "fmt"
func main() {
 var a, b int
 if _, err := fmt.Scan(&a, &b); err != nil {
  fmt.Fprintln(os.Stderr, "could not read the numbers")
  os.Exit(1)
 }

 switch {
 case a < b:
  fmt.Println(a, "is less than", b)
 case a == b:
  fmt.Println(a, "is equal to", b)
 case a > b:
  fmt.Println(a, "is greater than", b)
 }
}
```
In this code, we use the `fmt` package to read two integers from the user using `fmt.Scan`. We then use a `switch` statement to test each condition separately and print the appropriate message. Note that we also use `os.Exit(1)` to exit the program if an error occurs while reading the numbers.

