Sure! Below is the equivalent code snippet in Golang for performing string interpolation as per your requirements:

```go
package main

import "fmt"

func main() {
	extra := "big"
	newStr := fmt.Sprintf("Mary had a %s lamb.", extra)
	fmt.Println(newStr)
}
```

Explanation:
- We import the `fmt` package which provides functions for formatted I/O.
- In the `main` function, we declare and initialize the variable `extra` with the value `"big"`.
- We use the `fmt.Sprintf` function to create a new string by interpolating `extra` into the template "Mary had a %s lamb.".
- Finally, we print the resulting interpolated string.

When you run this code, it will output:

Mary had a big lamb.

