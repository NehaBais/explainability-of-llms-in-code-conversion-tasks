import (
	"io/ioutil"
	"os"
	"path/filepath"
)

const FILE_NAME = "output.txt"
const DIR_NAME = "docs"

func main() {
	create(".")
	create("/")
}

func create(root string) {
	fPath := filepath.Join(root, FILE_NAME)
	dPath := filepath.Join(root, DIR_NAME)

	if err := os.MkdirAll(dPath, 0755); err != nil {
		panic(err)
	}

	if _, err := ioutil.WriteFile(fPath, nil, 0644); err != nil {
		panic(err)
	}
}