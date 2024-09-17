Sure! Here's the equivalent Golang code:
```
package main
import "fmt"
func main() {
 var a, b int
 fmt.Println("Enter two integers:")
 fmt.Scan(&a, &b)
 switch {
 case a < b:
 fmt.Printf("%d is less than %dn", a, b)
 case a > b:
 fmt.Printf("%d is greater than %dn", a, b)
 default:
 fmt.Printf("%d is equal to %dn", a, b)
 }
}
```
This code uses the `fmt` package to print messages to the console and the `scan` function to read user input from the command line. The `switch` statement is used to check the value of `a` compared to `b`, and based on the result it prints a message indicating whether `a` is less than, equal to, or greater than `b`.

