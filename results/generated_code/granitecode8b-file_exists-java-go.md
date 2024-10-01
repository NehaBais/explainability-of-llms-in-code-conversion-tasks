Here's how you can convert the Java code to Golang:
```go
file, _ := os.Open("docs/input.txt")
defer file.Close()
_, err := file.Stat()
if err == nil {
 fmt.Println("File exists")
} else {
 fmt.Println("File does not exist")
}
file, _ := os.Open("/docs/input.txt")
defer file.Close()
_, err := file.Stat()
if err == nil {
 fmt.Println("File exists")
} else {
 fmt.Println("File does not exist")
}
```
Note: In Golang, the `os` package provides a way to access the operating system's functionality, including checking if a file or directory exists. The code uses the `Open()` function to open the file and the `Stat()` function to get information about the file or directory. If the file or directory exists, the `Stat()` function returns nil, which is checked using an `if` statement. Otherwise, an error is returned, which is printed to the console.

