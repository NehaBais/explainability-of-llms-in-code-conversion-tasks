package main

import (
	"fmt"
	"os"
)

func mkdirp(path string) error {
	if err := os.MkdirAll(path, 0755); err != nil {
		return fmt.Errorf("failed to create directory: %w", err)
	}
	return nil
}
func main() {
	path := "C:/parent/test"
	if err := mkdirp(path); err != nil {
		fmt.Println("Failed to create directory:", err)
	} else {
		fmt.Println("Directory created successfully")
	}
}
