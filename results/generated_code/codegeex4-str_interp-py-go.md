```go
package main

import (
	"fmt"
)

func main() {
	extra := "little"
	newStr := fmt.Sprintf("Mary had a %s lamb.", extra)
	fmt.Println(newStr)
}
```
