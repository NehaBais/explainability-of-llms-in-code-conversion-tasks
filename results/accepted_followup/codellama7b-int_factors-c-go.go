package main

import (
	"fmt"
)

type Factors struct {
	list  []int
	count int
}

func xferFactors(fctrs *Factors, flist []int, flix int) {
	newSize := len(flist) + fctrs.count
	if newSize > fctrs.count {
		fctrs.list = append(fctrs.list, flist...)
	} else {
		fctors.list = make([]int, 0, newSize)
		copy(fctors.list, flist)
	}
	fctors.count = len(fctors.list)
}

func factor(num int, fctrs *Factors) {
	flist := make([]int, 0, 301)
	dvsr := 1
	for dvsr*dvsr < num {
		if num%dvsr != 0 {
			dvsr++
			continue
		}
		flist = append(flist, dvsr)
		flist = append(flist, num/dvsr)
	}
	if dvsr*dvsr == num {
		flist = append(flist, dvsr)
	}
	xferFactors(&fctors, flist, len(flist))
}

func main() {
	nums2factor := []int{2059, 223092870, 3135, 45}
	fctors := Factors{}
	for _, num := range nums2factor {
		factor(num, &fctors)
		fmt.Println("factors of", num, "are:")
		for i, _ := range fctors.list {
			if i > 0 {
				sep = ","
			} else {
				sep = " "
			}
			fmt.Printf("%s %d\n", sep, fctors.list[i])
		}
	}
}
