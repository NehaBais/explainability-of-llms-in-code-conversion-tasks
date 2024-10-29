In Go, the equivalent code would be as follows.
Go does not have built-in functions for string joining like C++ STL accumulate function, so you'll need to use `strings.Join()` instead.

Here is how it works:

```go
package main
 
import (
	"fmt"
	"strings"
)

func main(){
	myStrings := []string{"prepended to", "my string"}
	prepended := strings.Join(myStrings, "")
	fmt.Println(prepended)
}
```

In this code:
- A slice `myStrings` is declared and initialized with the desired elements.
- The built-in function `strings.Join()` is used to concatenate all strings in the slice into one string, using "" as a delimiter between each element. This corresponds to std::accumulate from C++ code.
- Finally we print out the result using `fmt.Println(prepended)` which corresponds to `std::cout << prepended << std::endl;` in C++.

