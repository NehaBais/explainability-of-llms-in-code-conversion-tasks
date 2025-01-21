To convert this Java code to Golang, you can use string formatting along with variable substitution. Here's how:

```go
package main

import (
	"fmt"
)

func main() {
	adjective := "little"
	lyric := fmt.Sprintf("Mary had a %s lamb", adjective)
	fmt.Println(lyric)
}
```

In this Golang code:
- `fmt` is the package that provides functions for formatting and printing strings.
- `fmt.Sprintf` is used to create a new string by replacing placeholders in a format string with values. The format string is passed as the first argument, followed by the values to be inserted into the placeholders.
- The placeholder `%s` corresponds to the type of string (`string`) in this case.
- The result is then printed using `fmt.Println`.

This will output "Mary had a little lamb".
