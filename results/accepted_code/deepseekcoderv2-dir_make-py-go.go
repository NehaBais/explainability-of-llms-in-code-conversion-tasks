import (
	"os"
	"path/filepath"
)

func MkdirAllPath(path string) {
	err := os.MkdirAll(path, 0755)
	if err != nil {
		return err
	} else {
		return ""
	}
}