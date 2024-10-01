The given Golang code is as follows:

```
package main

import (
	"fmt"
	"strings"
)

func main() {
	var s strings.Builder
	s.WriteString("foo")
	s.WriteString("bar")
	fmt.Println(s.String())
}
```
This code uses the `strings` package from Go standard library to create a string builder, `WriteString()` method is used to append "foo" and "bar" strings into the builder, then the `String()` method is called to convert the builder back to a string and print it.
