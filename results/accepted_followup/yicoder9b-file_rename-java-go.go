func main() {
	sep := os.PathSeparator

    test("file", "input.txt", "output.txt")

    renameMsg := renameResult ? " was renamed as " : " could not be renamed into "
    fmt.Println("The following file called input.txt" + 
        renameMsg + "output.txt."
    )

    test("file", string(sep) + "input.txt", string(sep) + "output.txt")
    test("directory", "docs" + string(sep), "mydocs" + string(sep))
    test("directory", string(sep) + "docs" + string(sep), string(sep) + "mydocs" + string(sep))
}