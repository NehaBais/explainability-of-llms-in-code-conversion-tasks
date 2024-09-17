### Code:
```go
package main
import "fmt"
func main() {
    var a, b int
    fmt.Println("Enter value of a:")
    fmt.Scanf("%d", &a)

    fmt.Println("Enter value of b:")
    fmt.Scanf("%d", &b)

    if a < b {
        fmt.Println("A is less than B")
    } else if a > b {
        fmt.Println("A is greater than B")
    } else if a == b {
        fmt.Println("A is equal to B")
    }
}
```

