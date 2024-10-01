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