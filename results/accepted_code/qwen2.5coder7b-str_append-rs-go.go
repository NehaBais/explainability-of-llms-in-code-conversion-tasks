package main

import "fmt"

func main() {
	var hello string = "Hello world"
	fmt.Println(hello + "!!!!")
}

func main() {
	var hello string = "Hello world"
	hello += "!!!!"
	fmt.Println(hello)
}
