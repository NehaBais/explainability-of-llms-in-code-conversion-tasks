 The error is caused by the import of "strings" package that was imported but not used anywhere in the program, hence it's giving an error as "imported and not used". 

To fix this issue, you can simply remove or comment out the line `import (.... strings)`. The corrected Go code would look like:

```go
package main

// import "strings" // Removed unnecessary import statement

func sconcat(s1 string, s2 string) string {
	return s1 + s2
}

func main() {
	s := "hello"

	// Print the original variable
	fmt.Println(s)

	// Or print with another string literal
	fmt.Printf("%s%s\n", s, " literal")

	// Concatenate and save in another variable
	s2 := sconcat(s, " literal")

	// Print the result
	fmt.Println(s2)
}
```
