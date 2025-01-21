 Sure! Below is the equivalent Golang code for the provided Python script:

```go
package main

import (
	"os"
)

func createFileAndDirectory(directory string) error {
	// Create an empty file called "output.txt" in the specified directory
	file, err := os.Create(directory + "/output.txt")
	if err != nil {
		return err
	}
	file.Close()

	// Create an empty directory called "docs" in the specified directory
	err = os.Mkdir(directory+"/docs", 0755)
	if err != nil {
		return err
	}

	return nil
}

func main() {
	// Create files and directories in the current working directory
	err := createFileAndDirectory(".")
	if err != nil {
		fmt.Println("Error creating file and directory in current directory:", err)
	} else {
		fmt.Println("Successfully created file and directory in current directory")
	}

	// Create files and directories in the root directory
	err = createFileAndDirectory("/")
	if err != nil {
		fmt.Println("Error creating file and directory in root directory:", err)
	} else {
		fmt.Println("Successfully created file and directory in root directory")
	}
}
```

### Explanation:
1. **Imports**: The `os` package is imported to use file and directory operations.
2. **createFileAndDirectory Function**: This function takes a directory path as an argument, creates an empty file named "output.txt" in that directory, and then creates an empty directory named "docs".
3. **Main Function**: The `main` function calls the `createFileAndDirectory` function twice: once for the current working directory (`"."`) and once for the root directory (`"/"`). It handles any errors that may occur during file and directory creation.

### Notes:
- In Golang, there is no need to use `with_statement` as it is a Python construct.
- The mode `0755` is used when creating directories in Golang to specify the permissions (read, write, execute for the owner, group, and others).
