The equivalent code in Golang would be:

```golang
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
In the Golang version, we import the `fmt` package to be able to use the `Println()` function to print the output. We also declare `s` as a string variable and assign it a value of "12345678". Then, we concatenate another string literal "0" with s using + operator and assign it back to s. Finally, we print out the combined string "012345678".
