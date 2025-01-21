 Sure! Below is the equivalent code in Golang:

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

In this Go code:
- `extra` is defined as the string `"little"`.
- `fmt.Sprintf` is used to perform string interpolation, where the placeholder `%s` is replaced by the value of `extra`.
