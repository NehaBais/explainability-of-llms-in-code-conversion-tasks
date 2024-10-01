package main

import (
	"fmt"
	"os"
)

func main() {
	for _, path := range []string{"input.txt", "docs", "/input.txt", "/docs"} {
		switchFileType(path)
	}
}

func switchFileType(filePath string) {
	if info, err := os.Stat(filePath); err == nil && info.IsDir() {
		fmt.Printf("%s is a directory\n", filePath)
	} else if err == nil {
		fmt.Printf("%s is a file\n", filePath)
	} else {
		fmt.Printf("%s does not exist\n", filePath)
	}
}
