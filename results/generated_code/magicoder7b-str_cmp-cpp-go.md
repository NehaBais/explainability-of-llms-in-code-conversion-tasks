 Below is the Golang equivalent of your C++ code:

```go
package main

import(
	"fmt"
	"strings"
)

func demoCompare(a, b string, semantically string) {
	fmt.Println(a, " and ", b, " are ", ((a == b) ? "" : "not ") , "exactly " , semantically," equal." )
	fmt.Println(a, " and ", b, " are ", ((a != b) ? "" : "not ") , semantically,"inequal." )
	fmt.Println(a, " is ", ((a < b) ? "" : "not ") , semantically," ordered before" , b )
	fmt.Println(a, " is ", ((a > b) ? "" : "not ") , semantically," ordered after" , b )
}

func main() {
	// Case-sensitive comparisons.
    a := (len(os.Args) > 1) ? os.Args[1] : "1.2.Foo"
	b := (len(os.Args) > 2) ? os.Args[2] : "1.3.Bar"
	demoCompare(a, b, "lexically")

    // Case-insensitive comparisons by folding both strings to a common case.
	a = strings.ToLower(a)
	b = strings.ToLower(b)
	demoCompare(a, b, "lexically")
}
```
Please note: The above Go code does not exactly mirror the behavior of your C++ code because in Golang there is no direct equivalent for the >> operator that allows us to compare two string values as numbers. However, it does demonstrate how you can use the `strings` package to compare strings lexically and case insensitively.
