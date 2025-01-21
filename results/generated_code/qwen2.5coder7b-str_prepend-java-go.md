Here's how you can convert that Java code into Go:

```go
package main

import (
	"fmt"
)

func main() {
	var stringVar string = "def"
	stringVar = "abc" + stringVar
	fmt.Println(stringVar)
}
```

This code creates a `stringVar` variable equal to the text value `"def"`, then prepends the string variable with another string literal `"abc"` using the `+` operator, and finally prints out the result.
