import (
	"os"
	"path/filepath"
)

// Check file and directory existence in current working directory
if _, err := os.Stat("input.txt"); os.IsNotExist(err) {
	panic("input.txt file does not exist")
}
if _, err := os.Stat("docs"); os.IsNotExist(err) {
	panic("docs directory does not exist")
}

// Check file and directory existence in filesystem root
if _, err := os.Stat("/input.txt"); os.IsNotExist(err) {
	panic("/input.txt file does not exist")
}
if _, err := os.Stat("/docs"); os.IsNotExist(err) {
	panic("/docs directory does not exist")
}