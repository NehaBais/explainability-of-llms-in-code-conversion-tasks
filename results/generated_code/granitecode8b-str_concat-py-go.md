Here's the equivalent code in Golang:
```go
package main
import "fmt"
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
The output of this program will be:

hello world
hello world
hello, world, mom
hello, world, mom

Note that in Golang, we use the `+` operator to concatenate strings, and we use the `strings.Join()` function to join a slice of strings with a delimiter. In this case, the delimiter is a comma followed by a space.

