In Golang, you can use the `os` package to interact with the operating system and retrieve information about files. Here's a possible conversion of the Java code to Go:
```
package main

import (
	"fmt"
	"io/ioutil"
	"log"
	"os"
)

func main() {
	// Get the current working directory
	wd, err := os.Getwd()
	if err != nil {
		log.Fatal(err)
	}

	// Create a new file object for the input.txt file in the current working directory
	fileA, err := os.Open("input.txt")
	if err != nil {
		log.Fatal(err)
	}
	defer fileA.Close()

	// Get the size of the input.txt file
	fileASize, err := fileA.Stat().Size()
	if err != nil {
		log.Fatal(err)
	}

	fmt.Printf("%d B\n", fileASize)

	// Create a new file object for the input.txt file in the root directory of the file system
	fileB, err := os.Open("/input.txt")
	if err != nil {
		log.Fatal(err)
	}
	defer fileB.Close()

	// Get the size of the input.txt file in the root directory
	fileBSize, err := fileB.Stat().Size()
	if err != nil {
		log.Fatal(err)
	}

	fmt.Printf("%d B\n", fileBSize)
}
```
In this code, we use the `os` package to interact with the operating system and retrieve information about files. We create a new `File` object for each file using the `os.Open()` function, which takes the path of the file as an argument. We then get the size of each file using the `Stat()` method of the `File` object, which returns a `FileInfo` struct containing information about the file. Finally, we print the size of each file to the console using the `fmt` package.

Note that in Go, it's important to properly close any resources you acquire, such as files and connections, to avoid leaking memory and other system resources. In this code, we use a `defer` statement to ensure that the `Close()` method is called on both file objects even if an error occurs during program execution.
