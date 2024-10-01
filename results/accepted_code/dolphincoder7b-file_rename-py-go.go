package main

import (
	"fmt"
	"os"
)

func main() {
	// Rename "input.txt" to "output.txt", both in current working dir and filesystem root
	os.Rename("input.txt", "output.txt")
	os.Rename(os.PathSeparator+"docs", os.PathSeparator+"mydocs")

	// Same as above, but in reverse order for testing purposes
	os.Rename("output.txt", "input.txt")
	os.Rename(os.PathSeparator+"mydocs", os.PathSeparator+"docs")
}
