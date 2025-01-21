import (
	"filepath"
)

func main() {
	if len(os.Args) < 2 {
		fmt.Printf("usage: mkdir <directory>\n")
		return
	}

	// Using the built-in 'filepath' package, to create directories if they don't exist
	_, err := filepath.CreateDirAll(os.Args[1])
	if err != nil {
		fmt.Printf("couldn't create directory: %s\n", err)
		return
	}
	// If the CreateDirAll call was successful, then we know that directories have been successfully created
	fmt.Printf("created directories successfully\n")
}