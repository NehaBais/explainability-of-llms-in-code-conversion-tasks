import (
	"os"
)

// Move files and directories
func moveFilesAndDirectories() {
	// Current working directory
	if err := os.Rename("input.txt", "output.txt"); err != nil {
		panic(err)
	}
	if err := os.Rename("docs", "mydocs"); err != nil {
		panic(err)
	}

	// Filesystem root
	if err := os.Rename("/input.txt", "/output.txt"); err != nil {
		panic(err)
	}
	if err := os.Rename("/docs", "/mydocs"); err != nil {
		panic(err)
	}
}

moveFilesAndDirectories()