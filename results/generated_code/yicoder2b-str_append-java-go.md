The equivalent code in Golang would be:

```golang
package main

import (
	"fmt"
)

func main() {
	var string = "abc"
	fmt.Println(string)
	string += "def"
	fmt.Println(string)
}
```
This program defines a `string` variable and prints its initial value, then appends another string to it and prints the updated value. 

The idiomatic way in Go to append a string is by using the `+=` operator. In this example, we use it with the `+"def"` expression to append "def" to the `string` variable.
