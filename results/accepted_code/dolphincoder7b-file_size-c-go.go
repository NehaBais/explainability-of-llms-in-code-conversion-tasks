package main
import (
    "fmt"
    "os"
)
func main() {
    var foo os.FileInfo
    stat, _ := os.Stat("input.txt")
    fmt.Printf("%d
", stat.Size())
    rootStat, _ := os.Stat("/")
    fmt.Printf("%d
", rootStat.Size())
}