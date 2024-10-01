import "os"

// Rename files and directories in the current working directory.
os.Rename("input.txt", "output.txt")
os.Rename("docs", "mydocs")

// Rename files and directories in the filesystem root.
os.Rename(os.Getenv("HOME")+"/input.txt", os.Getenv("HOME")+"/output.txt")
os.Rename(os.Getenv("HOME")+"/docs", os.Getenv("HOME")+"/mydocs")