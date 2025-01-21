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

type sys Stat_t struct {
    Dev     uint32
    Ino     uint32
    Mode    uint32
    Nlink   uint32
    Uid      int32
    Gid      int32
    Rdev     uint32
    Size     int64
    Blocks  uint64
    Blksize int32
    Iblock  uint64
    Atime    int64
    Mtime    int64
    Ctime    int64
}