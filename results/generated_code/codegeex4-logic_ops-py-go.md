In Go language, you can achieve this by defining a function similar to that in Python. Here is the equivalent Go code:

```go
package main

import "fmt"

func logic(a bool, b bool) {
	fmt.Println("a and b:", a && b)
	fmt.Println("a or b:", a || b)
	fmt.Println("not a:", !a)
}

func main() {
	logic(true, true)
}
```

In the above Go code:

- `&&` is equivalent to Python's `and`.
- `||` is equivalent to Python's `or`.
- `!` is equivalent to Python's `not`.

You can call the function with different boolean values as per your requirement inside the `main()` function.
