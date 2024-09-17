This code has been successfully converted to Golang. Here's the equivalent function:

```go
package main
import "fmt"

func main() {
    var a, b int

    fmt.Print("Enter two integers: ")
    if _, err := fmt.Scan(&a, &b); err != nil {
        fmt.Println(err)
        return
    }
    
    if a < b {
        fmt.Printf("%d is less than %d\n", a, b)
    } else if a == b {
        fmt.Printf("%d is equal to %d\n", a, b)
    } else {
        fmt.Printf("%d is greater than %d\n", a, b)
    }
}
```

You can execute this code using the following command: `go run main.go`.
