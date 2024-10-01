In Go, you can use the `fmt` package to interpolate a value into a string. Here's how you would implement that in Go:

```go
package main

import (
	"fmt"
)

func main() {
	original := "Mary had a X lamb"
	little := "big"
	replaced := fmt.Sprintf("%v", original, little) // changes the original string
	fmt.Println(replaced)
}
```

However, this method does not change the original string in-place as you would expect from a traditional string interpolation. If you want to keep the original string unchanged and get a new one with replaced values, you can use `strings.Replace()` function like this:


package main

import (
	"fmt"
)

func main() {
	original := "Mary had a X lamb"
	little := "big"
	replaced := strings.Replace(original, "X", little, -1) // changes the original string
	fmt.Println(replaced)
}
