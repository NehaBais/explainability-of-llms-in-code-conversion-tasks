import "os"

func main() {
  // Rename in current working directory
  if err := os.Rename("input.txt", "output.txt"); err != nil {
    panic(err)
  }
  if err := os.Rename("docs", "mydocs"); err != nil {
    panic(err)
  }

  // Rename in filesystem root
  if err := os.Rename("/input.txt", "/output.txt"); err != nil {
    panic(err)
  }
  if err := os.Rename("/docs", "/mydocs"); err != nil {
    panic(err)
  }
}