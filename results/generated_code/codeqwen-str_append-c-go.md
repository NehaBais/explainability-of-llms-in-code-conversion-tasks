Here is the equivalent code in Golang:

```golang
package main

import (
	"fmt"
)

func main() {
	var str string = "Good Morning"
	cstr := " to All"
	cstr2 := " !!!"

	/* 1st method */
	str += cstr

	/* 2nd method */
	x := len(str)
	str = fmt.Sprintf("%s%s", str[:x], cstr2)

	fmt.Println(str)
}
```
In Golang, you can directly append strings using the '+' operator. In Go, if you try to concatenate two string literals that do not fit into one another it will return a compile-time error. If you need to concatenate strings dynamically (e.g., in this case based on the variable str length), you can use `Sprintf` from the "fmt" package. In Golang, strings are immutable, so you cannot directly change them once they have been created - hence you must create a new string with the changes you want made.
