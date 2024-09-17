Here's the converted code in Golang:
```
package main
import "fmt"
func main() {
 var a, b int
 fmt.Println("Enter two integers:")
 fmt.Scan(&a, &b)
 switch {
 case a < b:
 fmt.Printf("%d is less than %d", a, b)
 case a > b:
 fmt.Printf("%d is greater than %d", a, b)
 default:
 fmt.Printf("%d equals %d", a, b)
 }
}
```
This code prompts the user to enter two integers and then compares them using a switch statement. The switch statement checks if the first integer is less than, equal to, or greater than the second integer, and prints a message accordingly. The type coercion used in the original JavaScript code has been replaced with explicit type conversions using the `typeof` operator.
To test the code, you can run it in a Go development environment like Gogland. Simply copy and paste the code into a new Go file and run it. Then, enter two integers when prompted and observe the output message. You should see messages indicating whether the first integer is less than, equal to, or greater than the second integer.

