import (
 "fmt"
 "io/ioutil"
 "os"
)
func create(directory string) error {
 err := ioutil.WriteFile(fmt.Sprintf("%s/output.txt", directory), []byte{}, 0644)
 if err != nil {
 return fmt.Errorf("error writing to file: %w", err)
 }
 err = os.MkdirAll(fmt.Sprintf("%s/docs", directory), 0755)
 if err != nil {
 return fmt.Errorf("error creating directory: %w", err)
 }
 return nil
}
func main() {
 err := create(".") // current directory
 if err != nil {
 panic(err)
 }
 err = create("/") // root directory
 if err != nil {
 panic(err)
 }
}