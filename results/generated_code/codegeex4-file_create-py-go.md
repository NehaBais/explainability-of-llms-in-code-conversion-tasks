Below is the equivalent Golang code for your Python script. In Go language, you can use `os.Create()` to create a new empty file and `os.MkdirAll()` to create an empty directory. 

```go
package main

import (
	"os"
)

func create(directory string) {
	file, _ := os.Create(directory + "/output.txt")
	defer file.Close()
	
	err := os.MkdirAll(directory+"/docs", 0755)
	if err != nil {
		panic(err)
	}
}

func main() {
	create(".")    // current directory
	create("/")    // root directory (requires appropriate permissions)
}
```

Please note that creating files and directories in the root directory (`"/"`) usually requires superuser privileges, so you may need to run this program as a sudo user.

The `defer` statement is used to ensure that the file is closed once it's no longer needed. The returned error from os.MkdirAll() is checked but for simplicity in this example we are just panicking (crashing) if something goes wrong. In production code you would likely want to handle these errors more gracefully.
