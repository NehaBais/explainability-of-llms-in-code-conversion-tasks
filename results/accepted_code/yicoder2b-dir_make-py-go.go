package main

import (
	"fmt"
	"os"
	"strings"
)

func mkdirp(path string) error {
	split := strings.Split(path, "/")
	for _, part := range split[:len(split)-1] {
		if _, err := os.Stat(part); err != nil && !os.IsNotFound(err) {
			return err
		}
		_, err = os.Mkdir(part, 0755)
		if err != nil {
			return err
		}
	}
	return nil
}
func main() {
	path := "./path/to/dir"
	err := mkdirp(path)
	if err != nil {
		fmt.Printf("Failed to create directory %s: %v\n", path, err)
	} else {
		fmt.Printf("Created directory %s\n", path)
	}
}
