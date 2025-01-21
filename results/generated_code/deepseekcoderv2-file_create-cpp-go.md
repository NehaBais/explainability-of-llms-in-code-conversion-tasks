 Sure, here is the equivalent code in Golang:

```go
package main

import (
	"os"
)

func main() {
	// Create file "output.txt" in current directory
	file, err := os.Create("output.txt")
	if err != nil {
		panic(err)
	}
	file.Close()

	// Create file "/output.txt" (should require root privileges or be ignored)
	file, err = os.Create("/output.txt")
	if err != nil {
		panic(err)
	}
	file.Close()

	// Create directory "docs" in current directory
	err = os.Mkdir("docs", 0755)
	if err != nil {
		panic(err)
	}

	// Create directory "/docs" (should require root privileges or be ignored)
	err = os.Mkdir("/docs", 0755)
	if err != nil {
		panic(err)
	}
}
```

### Explanation:
1. **Creating a file in the current directory:**
   - `os.Create("output.txt")` creates or opens a file named "output.txt" in the current directory.
   - If there's an error, it panics (like throwing an exception in C++).

2. **Creating a file in the root directory:**
   - `os.Create("/output.txt")` attempts to create or open a file named "output.txt" in the root directory. This usually requires administrative privileges and may not work as expected on many systems, leading to an error.

3. **Creating a directory in the current directory:**
   - `os.Mkdir("docs", 0755)` creates a new directory named "docs" with default permissions (0755) in the current working directory.

4. **Creating a directory in the root directory:**
   - `os.Mkdir("/docs", 0755)` attempts to create a new directory named "docs" in the root directory. This usually requires administrative privileges and may not work as expected on many systems, leading to an error.
