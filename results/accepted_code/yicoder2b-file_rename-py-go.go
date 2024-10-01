import (
    "os/exec"
    "fmt"
)

func main() {
    if exec.ChangeFileMode("input.txt", "output.txt", 0644) == -1 {
        fmt.Println("Error changing input.txt mode")
    }

    if exec.ChangeDir("docs", "mydocs") == -1 {
        fmt.Println("Error changing directories")
    }
}