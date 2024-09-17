package main

import "fmt"

type Factors struct {
	list []int
	count int
}

func xferFactors(fctrs *Factors, flist []int, flix int) {
	newSize := fctrs.count + flix
	if newSize > flix {
		fctrs.list = append(fctrs.list, make([]int, newSize-len(fctrs.list))...)
	} else {
		fctrs.list = make([]int, newSize)
	}
	for ij, ix := 0, fctrs.count; ix < newSize; ij, ix++ {
		fctrs.list[ix] = flist[ij]
	}
	fctrs.count = newSize
}

func factor(num int, fctrs *Factors) *Factors {
	var flist []int
	var dvsr int
	flix := 0
	fctrs.count = 0
	for ix := range fctrs.list {
		fctrs.list[ix] = 0
	}
	for dvsr = 1; dvsr*dvsr < num; dvsr++ {
		if num%dvsr != 0 {
			continue
		}
		if flix == 300 {
			xferFactors(fctrs, flist, flix)
			flix = 0
		}
		flist[flix], flist[flix+1] = dvsr, num/dvsr
		flix += 2
	}
	if dvsr*dvsr == num {
		flist[flix] = dvsr
		flix++
	}
	xferFactors(fctrs, flist, flix)
	return fctrs
}

func main() {
	nums2factor := []int{2059, 223092870, 3135, 45}
	var ftors Factors
	for i := range nums2factor {
		ftors = *factor(nums2factor[i], &ftors)
		fmt.Printf("Factors of %d are: ", nums2factor[i])
		sep := ' '
		for j, v := range ftors.list {
			if j != 0 && sep == ',' {
				fmt.Print(", ")
			} else if j != 0 {
				fmt.Print(" ")
			}
			fmt.Printf("%c%d", sep, v)
			sep = ','
		}
		fmt.Println()
	}
}