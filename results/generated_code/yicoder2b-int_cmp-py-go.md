Sure, here is the equivalent Golang code for your Python program. I've added comments in the code which help you understand what it does:

```golang
package main
import "fmt"
func main() {
    // Taking two integer inputs from user using fmt.Scan()
    var a, b int
    fmt.Scan(&a)
    fmt.Scan(&b)

    // Performing comparison for each case separately and printing the result based on the conditions met
    if a < b {
        fmt.Println("a is less than b")
    } else if a > b {
        fmt.Println("a is greater than b")
    } else if a == b {
        fmt.Println("a is equal to b")
    } 
}
```
This program doesn't perform input validation. If you provide an input that is not integer, it will cause errors as Golang does not implicitly convert string inputs into integers. To handle such cases, you can implement additional logic for input validation in the code.
