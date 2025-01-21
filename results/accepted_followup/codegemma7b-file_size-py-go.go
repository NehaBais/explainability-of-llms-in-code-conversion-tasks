package main

import (
	"os"
)

func main() {
	size, _ := os.Stat("input.txt")
	size2, _ := os.Stat("/input.txt")
}
