The error occurs because the `main` package does not have access to the `logic` function, which is defined in another package.
To fix this issue, we need to move the `logic` function to the `main` package or import the package that defines the `logic` function into the `main` package.
Here's the corrected code:
```go
package main

import "fmt"

func logic(a bool, b bool) {
	fmt.Println("a AND b:", a && b)
	fmt.Println("a OR b:", a || b)
	fmt.Println("NOT a:", !a)
}
```
