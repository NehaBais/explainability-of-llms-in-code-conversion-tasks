
The error is due to the fact that the `strings` package has not been imported, and therefore the `join` method cannot be used. The fix is to import the `strings` package at the beginning of the file, as shown in the corrected code block below:
```go
package main

import (
	"fmt"
	"strings"
)

func main() {

	var s1 string = "hello"
	var s2 string = s1 + " world"

	fmt.Println(s1 + " world")
	fmt.Println(s2)

	fmt.Println(", ".join([]string{s1, "world", "mom"}))
}
```
This code imports the `strings` package and uses the `join` method to concatenate the elements of an array into a single string separated by commas.
