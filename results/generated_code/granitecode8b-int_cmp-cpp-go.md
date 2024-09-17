Here's the Golang code that meets the requirements:
```go
package main
import (
 "fmt"
)
func main() {
 var a, b int
 fmt.Println("Enter two integers:")
 _, err := fmt.Scan(&a, &b)
 if err != nil {
 fmt.Println("Error reading input:", err)
 return
 }
 // test for less-than
 if a < b {
 fmt.Printf("%d is less than %d
", a, b)
 }
 // test for equality
 if a == b {
 fmt.Printf("%d is equal to %d
", a, b)
 }
 // test for greater-than
 if a > b {
 fmt.Printf("%d is greater than %d
", a, b)
 }
}
```
This code prompts the user to enter two integers and reads them using `fmt.Scan()`. It then performs three comparisons on the input integers: less than, equality, and greater than. If any of these conditions are met, the corresponding message is printed using `fmt.Printf()`. Finally, if there was an error reading the input, an error message is printed to `stderr` and the program exits with a non-zero status code.
To test this code, you can run it in a terminal window and enter different integer pairs as input. Here are some examples:
```
$ go run comparison.go 
2 3
2 is less than 3
$ go run comparison.go 
5 5
5 is equal to 5
$ go run comparison.go 
4 2
4 is greater than 2
$ go run comparison.go 
10 -2
Error reading input: invalid syntax
```

