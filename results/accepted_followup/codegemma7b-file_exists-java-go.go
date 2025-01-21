package main

import (
	"os"
)

// Current working directory
if _, err := os.Stat("docs/input.txt"); os.IsNotExist(err) {
	panic("input.txt does not exist in docs directory")
}

// File and directory in filesystem root
if _, err := os.Stat("/docs/input.txt"); os.IsNotExist(err) {
	panic("/input.txt does not exist in /docs directory")
}