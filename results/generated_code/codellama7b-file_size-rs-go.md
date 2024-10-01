In Golang, you can use the `os` package to interact with the file system. Here's the equivalent code for the above Rust code in Go:
```go
package main

import (
	"fmt"
	"io/ioutil"
	"log"
	"os"
)

func main() {
	file, err := os.Open("input.txt")
	if err != nil {
		log.Fatal(err)
	}
	defer file.Close()

	stat, err := file.Stat()
	if err != nil {
		log.Fatal(err)
	}

	fmt.Println("Size of input.txt is", stat.Size())
}
```
Note that the `os` package provides a `File` type, which represents an open file, and a `Stat()` method on this type that returns information about the file, including its size. The `defer` keyword is used to ensure that the file is closed even if there is an error.

Also note that in Go, it's not necessary to use the `std::io::{self, Write}` modules like in Rust, as they are already provided by the `os` package.
