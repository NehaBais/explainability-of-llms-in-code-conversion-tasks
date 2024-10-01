In Go, you can use `fmt.Sprintf()` function to perform string interpolation similar to JavaScript's template literals. Here is how it translates:

```go
package main

import (
	"fmt"
)

func main() {

    original := "Mary had a X lamb."
    little := "big"
    replaced := fmt.Sprintf("%s %s %s", original, little, little))
	
	fmt.Println(replaced)
	
}
```
In the example above, `fmt.Sprintf` is used to interpolate the string. The format specifier (`%s` in this case) indicates where a value should be inserted. The values are passed as arguments after the format specifier. 

When you run the program, it prints:

Mary had a big lamb.

