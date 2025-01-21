The error is due to the fact that the `strings` package is imported but not used in the code. The `fmt` package is used instead. 
To fix this, simply remove the import statement for `strings`:
```go
package main
import (
 "fmt"
)
func main() {
 str := "my String"
 str = "Changed " + str
 fmt.Println(str)
}
```

