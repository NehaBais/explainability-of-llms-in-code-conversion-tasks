package main

import (
	"fmt"
)

type Factors struct {
	list  []int
	count int
}

func xferFactors(fctrs *Factors, flist []int, flix int) {
	var ix, ij int
	newSize := fctrs.count + flix

	if len(fctrs.list) < newSize {
		fctrs.list = make([]int, newSize)
	} else if newSize > 0 && cap(fctrs.list) >= newSize {
		fctrs.list = fctrs.list[:newSize]
	}

	for ix, ij = fctrs.count, 0; ix < newSize; ix++ {
		fctrs.list[ix] = flist[ij]
		ij++
	}

	fctrs.count = newSize
}

func factor(num int, fctrs *Factors) *Factors {
	var flist [301]int
	dvsr := 1

	fctrs.count = 0
	for dvsr*dvsr < num {
		if num%dvsr != 0 {
			dvsr++
			continue
		}

		flist[fctrs.count] = dvsr
		flist[fctrs.count+1] = num / dvsr
		fctrs.count += 2
	}

	if dvsr*dvsr == num {
		flist[fctrs.count] = dvsr
		fctrs.count++
	}
	xferFactors(fctrs, flist[:fctrs.count], fctrs.count)

	return fctrs
}

func main() {
	var nums2factor [4]int = [4]int{2059, 223092870, 3135, 45}
	fctors := Factors{nil, 0}
	var sep rune

	for i := 0; i < 4; i++ {
		factor(nums2factor[i], &fctors)
		fmt.Printf("factors of %d are: ", nums2factor[i])
		for j, _ := range fctors.list {
			if sep == 0 {
				os.Stdout.WriteRune(' ')
				sep = ','
			} else {
				os.Stdout.WriteRune(sep)
				sep = 0
			}
			fmt.Printf("%c %d", sep, fctors.list[j])
		}
		fmt.Println()
	}
}
