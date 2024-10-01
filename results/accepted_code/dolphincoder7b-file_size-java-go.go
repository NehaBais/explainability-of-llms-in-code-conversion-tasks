package main

import "fmt"
import "os"

func main() {
	fileA := os.File("file.txt")
	size, _ := fileA.Stat()
	fmt.Printf("%,d B%n", size.Size()) // print out the size in bytes
}
