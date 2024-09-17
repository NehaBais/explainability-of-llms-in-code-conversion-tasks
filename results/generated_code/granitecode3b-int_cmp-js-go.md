Sure, here's the converted code in Golang:
```go
package main
import "fmt"
func main() {
 var a, b int
 fmt.Println("Enter two integers:")
 fmt.Scan(&a, &b)
 
 switch {
 case a < b:
 fmt.Println(a, "is less than", b)
 case a > b:
 fmt.Println(a, "is greater than", b)
 default:
 fmt.Println(a, "equals", b)
 }
}
```
In this code, we first declare two integer variables `a` and `b`. We then prompt the user to enter two integers using `fmt.Println` and `fmt.Scan`. 
Next, we use a `switch` statement to compare the values of `a` and `b`. The `case` statements check if `a` is less than, greater than, or equal to `b`. If none of these conditions are met, the code will fall into the default case and print that `a` and `b` are equal.
This code uses type coercion by comparing the types of `a` and `b` using `typeof`. However, it is not necessary in Golang as it has automatic type conversion built-in.

