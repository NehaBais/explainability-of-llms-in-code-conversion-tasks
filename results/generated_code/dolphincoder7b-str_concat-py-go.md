### Pseudocode:
s1 = "hello"
print(s1 + " world")

s2 = s1 + " world"
print(s2)

s1 = "hello"
print(", ".join([s1, "world", "mom"]))

s2 = ", ".join([s1, "world", "mom"])
print(s2)

### Code in Golang:
```go
package main
import (
    "fmt"
    "strings"
)
func main() {
    s1 := "hello"
    fmt.Println(s1 + " world")

    s2 := s1 + " world"
    fmt.Println(s2)

    s3 := []string{s1, "world", "mom"}
    fmt.Println(strings.Join(s3, ", "))
    
    s4 := strings.Join(s3, ", ")
    fmt.Println(s4)
}
```
