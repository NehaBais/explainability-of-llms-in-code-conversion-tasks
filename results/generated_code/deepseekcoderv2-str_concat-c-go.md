### Solution 1:
```go
package main
import (
	"fmt"
)
func concateString(str *string){
	*str = fmt.Sprintf("%s %s","Hello",*str)
	fmt.Println(*str)
}
func main() {
	str :="World"
	concateString(&str)
}
```
