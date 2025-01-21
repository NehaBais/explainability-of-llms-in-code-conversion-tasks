The error "not enough arguments in call to interpolation" arises due to incorrect number of arguments being passed to the interpolation function. It is necessary to pass three string arguments while only two are provided in this case. Similarly, for the interpolationWithName function, it requires three strings as arguments but just one is given. The solution would be to provide all required arguments.

```go
package main

import (
	"fmt"
)

func main() {
	interpolation("Mary had a little lamb", "little", "lamb") // Correct usage of interpolation function
	interpolationWithName("Mary", "little") // Function call with two strings
}

func interpolation(s string, a string, b string) {
	fmt.Printf("%s\n", s, a, b) 
}

func interpolationWithName(name string, adj string, noun string) {
	fmt.Printf("%s had a %s lamb\n", name, adj, noun)
}
```

In the second function call "interpolationWithName("Mary", "little")", the order of arguments is correct as "adj" and "noun" are named arguments.
