package main

import (
	"fmt"
	"os"
)

func main() {
	var foo os.FileInfo
	stat, _ := os.Stat("input.txt")
	fmt.Printf("%lld\n", stat.Size())
	rootStat, _ := os.Stat("/")
	fmt.Printf("%lld\n", rootStat.Size())
}
