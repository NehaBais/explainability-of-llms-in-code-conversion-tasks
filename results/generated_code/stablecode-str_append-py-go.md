Here is the equivalent Golang code for your Python script:

```go
package main

import (
	"fmt"
)

func main() {
	var str = "12345678"
	str += "9!""

	fmt.Println(str)
}
```
This Golang code does the following:

1. Imports the `fmt` package, which is used to format and print output in Go.

2. Defines the main function, which is the entry point of a Go program.

3. Declares a string variable named `str`, initializes it with the value "12345678", and then appends the string literal "9!"" to it.

4. Uses the `fmt.Println()` function to print the contents of the `str` variable after the append operation.

5. Ends the main function and the program execution reaches to here, then the program is executed successfully.
