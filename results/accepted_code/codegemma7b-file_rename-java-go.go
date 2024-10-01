import (
	"os"
)

func renameFile(oldname, newname string) bool {
	file := os.File(oldname)
	file2 := os.File(newname)
	return file.RenameTo(file2)
}

func test(typ, oldname, newname string) {
	fmt.Println("The following " + typ + " called " + oldname +
		(renameFile(oldname, newname) ? " was renamed as " : " could not be renamed into ") +
		newname + "."
	)
}

func main() {
	test("file", "input.txt", "output.txt")
	test("file", os.Separator+"input.txt", os.Separator+"output.txt")
	test("directory", "docs", "mydocs")
	test("directory", os.Separator+"docs"+os.Separator, os.Separator+"mydocs"+os.Separator)
}