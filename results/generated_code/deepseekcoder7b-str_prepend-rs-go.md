In Golang, you can use `strings.Builder` to do this task. Here is the equivalent Golang code for the Rust code provided:

package main

import (
	"fmt"
	"strings"
)

func main() {
	var b strings.Builder
	b.WriteString("World")
	// Inserting "Hello " at the beginning of the string, this can be done by first writing "Hello ", and then writing the rest of the string
	b.WriteString("Hello ")
	b.WriteString(b.String())
	fmt.Println(b.String())
}

Please note that in Golang strings are immutable, so if you wanted to add "Hello " at the beginning of "World", you have to create a new string and then concatenate "Hello " with World as `"Hello " + s`. Here's how you can do this:
```go
package main

import (
	"fmt"
)

func main() {
	s := "World"
	// Prepend the string 
	s = "Hello " + s
	fmt.Println(s)
}
```

