In Go, you can use the `strings` package to perform string manipulation tasks like this. Here is how it could be done:

```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	var myStrings []string = {"prepended to", "my string"}
	var prepended string = strings.Join(myStrings, "")
	fmt.Println(prepended)
}
```
In this Go code:
- `package main` declares the main package and includes necessary functionality for the program.
- `import ("fmt" "strings")` is used to import the fmt and strings packages. The fmt package provides formatted IO operations, while the strings package has functions related to manipulation of string variables.
- `var myStrings []string = {"prepended to", "my string"}` creates an array of strings (slice in Go) named myStrings containing two string literals.
- `var prepended string = strings.Join(myStrings, "")` is used to concatenate the elements of myStrings into a single string variable named prepended. The second argument to strings.Join specifies how the strings should be joined (in this case, with nothing in between).
- Finally `fmt.Println(prepended)` prints out the value of the prepended variable and ends the program.
