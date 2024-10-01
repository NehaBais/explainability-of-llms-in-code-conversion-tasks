Below is the Golang equivalent of your Java code:

```go
package main

import (
	"fmt"
	"os/exec"
)

func main() {
	command := "mkdir -p path/to/dir"
	err := exec.Command("sh", "-c", command)).Run()
	
	if err != nil {
		log.Fatal(err)
	}

	fmt.Println("Path successfully created")
}
```
This Golang code is an equivalent implementation of the Java `File` class with its `mkdirs()` method functionality. 

The Golang code uses the `os/exec` package to run a shell command (`mkdir -p path/to/dir`) that has the same behavior as your original Java code.
