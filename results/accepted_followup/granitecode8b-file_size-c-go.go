package main
import (
 "fmt"
 "os"
)
func main() {
 fi, err := os.Stat("input.txt")
 if err != nil {
 fmt.Println(err)
 return
 }
 fmt.Printf("%d
", fi.Size())
 fi, err = os.Stat("/input.txt")
 if err != nil {
 fmt.Println(err)
 return
 }
 fmt.Printf("%d
", fi.Size())
}