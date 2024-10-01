This code will print the string "Mary had a little lamb" to the console.

Here is the equivalent code in Go:
```go
package main

import (
	"fmt"
)

func main() {
	extra := "little"
	fmt.Printf("Mary had a %s lamb.", extra)
}
```
In this code, we define a variable `extra` and assign the value `"little"` to it. Then, in the `main` function, we use the `fmt.Printf` function to print the string "Mary had a %s lamb." with the `%s` placeholder replaced by the value of `extra`.

Note that in Go, you can also use the `+` operator to concatenate strings, like this:

fmt.Println("Mary had a", extra, "lamb.")

This will produce the same output as the previous example, but it is more concise and easier to read.
