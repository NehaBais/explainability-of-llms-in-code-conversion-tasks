import (
	"os"
)
func main() {
	fs := os.FileSystem()

	// Checking if file 'input.txt' exists in current working directory.
	file, _ := fs.Open("input.txt")
	if file != nil {
		println("File exists in current working directory")
	} else {
		println("File doesn't exist in current working directory")
	}
	// Checking if file 'c:/input.txt' exists in current working directory.
	file, _ := fs.Open("c:\\input.txt")
	if file != nil {
		println("File exists at c:/ in current working directory")
	} else {
		println("File doesn't exist at c:/ in current working directory")
	}

	// Checking if folder 'docs' exists in current working directory.
	folder, _ := fs.Open("docs")
	if folder != nil {
		println("Folder exists in current working directory")
	} else {
		println("Folder doesn't exist in current working directory")
	}
	// Checking if folder 'c:/docs' exists in current working directory.
	folder, _ := fs.Open("c:\\docs")
	if folder != nil {
		println("Folder exists at c:/ in current working directory")
	} else {
		println("Folder doesn't exist at c:/ in current working directory")
	}
}