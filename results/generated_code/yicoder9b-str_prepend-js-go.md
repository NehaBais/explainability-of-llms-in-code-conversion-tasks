In GoLang, you can achieve this by simply concatenating the strings during assignment like so:

```Go
package main

import (
	"fmt"
)

func main() {
	var s = ", World"
	s = "Hello" + s
	fmt.Println(s)
}
```
