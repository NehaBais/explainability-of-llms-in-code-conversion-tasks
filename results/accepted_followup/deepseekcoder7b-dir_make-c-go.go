package main

import (
	"os"
	_ "path/filepath" // Removed unused import statement
)

func main() {
	dir := "./path/to/dir"
	if err := os.MkdirAll(dir, 0755); err != nil {
		panic(err)
	}
}
