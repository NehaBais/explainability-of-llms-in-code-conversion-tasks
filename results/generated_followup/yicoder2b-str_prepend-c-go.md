The error in the Go version of the code is that it mentions "strings" being imported but not used, when it's actually not needed here because we are simply concatenating two strings together using + operator.

The corrected Golang code:
```go
package main
import "fmt"

func main() {
	str := "my String"
	newStr := "Changed " + str
	fmt.Println(newStr)
}
```
This will output `Changed my String` to the console.
