import (
    "os/exec"
)

func main() {
    if err := exec.ChangeFileMode("input.txt", "output.txt", 0644); err != nil {
        panic(err) // or return err for different use cases
    }
    // The above call changes the permissions of input.txt to be 644 (equivalent to 444 in octal), which is read/write for owner and group but no others. This will throw an error if `input.txt` does not exist yet.
    if err := exec.ChangeDir("docs", "mydocs"); err != nil {
        panic(err) // or return err for different use cases
    }
    // The above call changes the current working directory to mydocs. This will throw an error if `mydocs` does not exist yet.
}