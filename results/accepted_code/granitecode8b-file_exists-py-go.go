import "os"
func main() {
 if _, err := os.Stat("input.txt"); os.IsNotExist(err) {
 fmt.Println("File does not exist.")
 } else {
 fmt.Println("File exists.")
 }
 if _, err := os.Stat("docs"); os.IsNotExist(err) {
 fmt.Println("Directory does not exist.")
 } else {
 fmt.Println("Directory exists.")
 }
 if _, err := os.Stat("/input.txt"); os.IsNotExist(err) {
 fmt.Println("File does not exist.")
 } else {
 fmt.Println("File exists.")
 }
 if _, err := os.Stat("/docs"); os.IsNotExist(err) {
 fmt.Println("Directory does not exist.")
 } else {
 fmt.Println("Directory exists.")
 }
}