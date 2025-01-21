package main

import (
	"fmt"
	"os/exec"
)

func main() {
	var statStat sys.Stat_t
	err := syscall.Stat("input.txt", &statStat)
	if err != nil {
		fmt.Println(err)
		return
	}
	fmt.Printf("%d\n", int(statStat.Size))

	var statStat1 sys.Stat_t
	err = syscall.Stat("/", &statStat1)
	if err != nil {
		fmt.Println(err)
		return
	}
	fmt.Printf("%d\n", int(statStat1.Size))
}
