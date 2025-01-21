wd, err := os.Getwd()
if err != nil {
	fmt.Println("Error getting current working directory:", err)
} else {
	// Use the first value (wd) as the current working directory
	inputFile = filepath.Join(wd, "input.txt")
	docsFolder = filepath.Join(wd, "docs")
}