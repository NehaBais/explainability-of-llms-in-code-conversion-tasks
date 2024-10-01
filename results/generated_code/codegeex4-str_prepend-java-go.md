In Go, you can achieve this by using the `+` operator similarly as in Java. Here is how the code would look like:

```go
package main

import (
	"fmt"
)

func main() {
	str := "def"
	str = "abc" + str
	fmt.Println(str)
}
```
This program will output: `abcdef`.
