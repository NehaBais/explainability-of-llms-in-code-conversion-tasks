import (
	"fmt"
	"os"
	"path/filepath"
)

func fileExists(path string) {
	info, err := os.Stat(path)
	if err != nil {
		fmt.Println(path, "does not exist")
		return
	}

	if info.IsDir() {
		fmt.Println(path, "is a directory")
	} else {
		fmt.Println(path, "exists with a file size of", info.Size(), "bytes.")
	}
}

func main() {
	fileExists("input.txt")
	fileExists("zero_length.txt")
	fileExists("docs/input.txt")
	fileExists("docs/zero_length.txt")

	// Using filepath.Abs to get absolute paths for root directory comparisons
	rootInputPath, _ := filepath.Abs("input.txt")
	rootDocsPath, _ := filepath.Abs("docs/input.txt")

	fileExists(rootInputPath)
	fileExists(rootDocsPath)
}