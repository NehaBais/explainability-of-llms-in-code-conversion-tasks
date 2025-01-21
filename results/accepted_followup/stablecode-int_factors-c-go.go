package main

import (
	"fmt"
)

type Factors struct {
	List   []int
	Count  int
}

func xferFactors(fctrs *Factors, flist []int, flix int) {
	if flix > 0 {
		xferFactors(fctrs, nil, 0)
	}

	flist = append(flist, 1, 2)
	for dvsr := 1; dvsr*dvsr < num; dvsr++ {
		if num%dvsr != 0 {
			continue
		}

		flist[flix] = dvsr
		flist[flix+1] = num / dvsr
		flix += 2
	}

	fctrs.List = flist[:len(flist)]
	fctrs.Count = len(flist)
}

func factor(num int, fctrs *Factors) *Factors {
	if fctrs.Count > 0 {
		xferFactors(fctrs, nil, 0)
	}

	flist := make([]int, 301))
	for i := 1; i < len(flist)-2; i++ {
		flist[i] = 0
	}

	fctrs.List = flist[:len(flist)]
	fctrs.Count = len(flist)
	factor.Println("")

	return fctrs
}

func main() {
	nums2factor := []int{205, 983, 3135, 45}
	fctrs := &Factors{
		List:   make([]int, 0)),
		Count:  0,
	}

	for _, num := range nums2factor {
		fctrs = factor(num, fctrs))
	}
}