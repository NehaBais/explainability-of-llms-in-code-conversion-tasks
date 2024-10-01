Answer:

```go
package main

import (
	"os"
)

func create(directory string) {
	file, _ := os.Create(directory + "/output.txt")
	defer file.Close()
	os.Mkdir(directory+"/docs", 0755)
}

func main() {
	create(".")
	create("/")
}
```
