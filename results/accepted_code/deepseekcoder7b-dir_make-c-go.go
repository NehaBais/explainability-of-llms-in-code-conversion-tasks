package main

import (
	"os"
	"path/filepath"
)

func main() {
	dir := "./path/to/dir"
	if err := os.MkdirAll(dir, 0755); err != nil {
		panic(err)
	}
}
