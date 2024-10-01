The equivalent Go code would be:

```go
package main

import (
	"fmt"
)

func main() {
	myStrings := []string{"prepended to", "my string"}
	prepended := combineStrings(myStrings...)
	fmt.Println(prepended)
}

func combineStrings(strs ...string) string {
	var result string
	for _, str := range strs {
		result += str
	}
	return result
}
```

In Go, instead of using `std::vector<std::string>`, we use a slice (`[]string`). Additionally, since Go doesn't support function overloading, we need to explicitly specify that the combineStrings function should be called with multiple string arguments. To achieve this, we use the "..." operator in function calls and variable argument lists (...strs). This is an equivalent operation to std::accumulate in C++. We then concatenate all strings in the slice using a for loop. Finally, the combined string is returned and printed out.
