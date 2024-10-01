import (
	"os"
	"path/filepath"
)

// mkdirp creates a directory and its parents if they don't exist.
func mkdirp(path string) error {
	return os.MkdirAll(path, os.ModePerm)
}