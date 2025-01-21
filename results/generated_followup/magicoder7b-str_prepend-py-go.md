 The error is because Golang doesn't use `strconv` like Python to convert string to int or vise versa, and it can't concatenate strings directly as in Python. So the import statement `"strconv"` which was added by mistake and is not used anywhere should be removed. 

Here is the corrected code:

```go
package main

import (
	"fmt"
)

func main() {
	s := "12345678"
	s = "0" + s // by concatenation
	fmt.Println(s)
}
```
