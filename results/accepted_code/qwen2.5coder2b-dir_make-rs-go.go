package main

import (
	"os"
)

func createDirAll(path string) error {
	if _, err := os.Stat(path); !os.IsNotExist(err) {
		return nil
	}

	parents, lastElement := splitPath(path)
	for _, parent := range parents {
		if err := os.Mkdir(parent, 0755); err != nil && !os.IsExist(err) {
			return err
		}
	}

	return os.Mkdir(lastElement, 0755)
}

func splitPath(path string) (parentDir string, lastElement string) {
	lastSlashIndex := strings.LastIndexOf(path, "/")
	if lastSlashIndex == -1 {
		return "", path
	} else {
		parentDir = path[:lastSlashIndex]
		lastElement = path[lastSlashIndex+1:]
	}
	return
}

func main() {
	err := createDirAll("./path/to/dir")
	if err != nil {
		panic(err)
	}
}
