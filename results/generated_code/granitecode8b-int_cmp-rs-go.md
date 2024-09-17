Here's the converted code from Rust to Golang:
```go
package main
import (
 "fmt"
 "os"
)
func main() {
 var a, b int
 fmt.Fscanf(os.Stdin, "%d %d", &a, &b)
 switch {
 case a < b:
 fmt.Printf("%d is less than %dn", a, b)
 case a == b:
 fmt.Printf("%d equals %dn", a, b)
 case a > b:
 fmt.Printf("%d is greater than %d", a, b)
 }
}
```
This code prompts the user to enter two integers and then uses a switch statement to compare them. The comparison operators `<`, `==`, and `>` are used to check if the first integer is less than, equal to, or greater than the second integer respectively. 
To test the condition for each case separately, we can run this program multiple times with different inputs. For example:
```
$ go run main.go 
1 2
1 is less than 2
$ go run main.go 
2 2
2 equals 2
$ go run main.go 
3 2
3 is greater than 2
```

