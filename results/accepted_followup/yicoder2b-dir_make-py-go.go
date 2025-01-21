package main

import (
	"fmt"
	"os"
	"strings"
)

func mkdirp(path string) []error {
	split := strings.Split(path, "/")
	var errors []error
	for i := 0; i < len(split)-1; i++ { // Last element is the directory name we want to create. We don't want it to return an error for existing or non-existing directories.
		part := split[i]
		if _, err := os.Stat(strings.Join(split[:i+1], "/")); err != nil { // Check if the parent directory exists.
			errors = append(errors, fmt.Errorf("Failed to create directory %s: parent directory not found", part))
		} else {
			if _, err := os.Mkdir(part, 0755); err != nil { // Create the directory if it doesn't already exist.
				errors = append(errors, err)
			}
		}
	}
	return errors
}
func main() {
	path := "./path/to/dir"
	errs := mkdirp(path)
	if len(errs) > 0 { // If we had any failures creating directories, print them and exit with a failure status code.
		for _, err := range errs {
			fmt.Printf("Failed to create directory %s: %v\n", path, err)
		}
		os.Exit(1) // Exit with an error status code.
	} else {
		fmt.Printf("Created directory %s\n", path)
	}
}
