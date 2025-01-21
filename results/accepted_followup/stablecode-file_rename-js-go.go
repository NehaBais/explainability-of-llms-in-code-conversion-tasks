import (
	"io/ioutil"
	"os"
	"path/filepath"
)

func main() {
	fso := &FileSystemObject{} // Assume the existence of this custom wrapper around the JS FileSystemObject.

	err := fso.MoveFile("input.txt", "output.txt")
	if err != nil {
		// Handle error
		panic(err)
	}

	err = fso.MoveFile("c:/input.txt", "c:/output.txt")
	if err != nil {
		// Handle error
		panic(err)
	}

	err = fso.MoveFolder("docs", "mydocs")
	if err != nil {
		// Handle error
		panic(err)
	}

	err = fso.MoveFolder("c:/docs", "c:/mydocs")
	if err != nil {
		// Handle error
		panic(err)
	}
}