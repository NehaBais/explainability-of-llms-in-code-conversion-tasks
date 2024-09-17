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
		newSize := fctrs.Count + flix

		if newSize > flix {
			fctrs.List = make([]int, newSize))
		} else {
			fctrs.List = realloc(
				unsafe.Pointer(&fctrs.List[0])),
				uintptr(newSize)*unsafe.Sizeof(int(0))))
		}

		for i := 0; i < flix; i++ {
			flist[i] = fctrs.List[fctrs.Count+i]]
		}

		fctrs.Count = newSize
	}
}

func factor(num int, fctrs *Factors) *Factors {
	if fctrs.Count > 0 {
		xferFactors(fctrs, nil, 0)
	}

	flist := make([]int, 301))
	flix := 0

	for dvsr := 1; dvsr*dvsr < num; dvsr++ {
		if num%dvsr != 0 {
			continue
		}

		if flix == 300 {
			xferFactors(fctrs, flist, flix))
			flix = 0
		}

		flist[flix] = dvsr
		flist[flix+1] = num / dvsr
		flix += 2
	}

	if dvsr*dvsr == num {
		flist[flix] = dvsr
		flix++
	}

	if flix > 0 {
		xferFactors(fctrs, flist, flix))
	}

	return fctrs
}

func main() {
	nums2factor := []int{2059, 223092870, 3135, 45}

	fctrs := &Factors{
		List:   make([]int, 0)),
		Count:  0,
	}

	for i := 0; i < 4; i++ {
		factor(nums2factor[i], fctrs))

		fmt.Printf("factors of %d are:\n", nums2factor[i]))

		sep := ','
		for j := 0; j < fctrs.Count; j++ {
			fmt.Printf("%c %d\n", sep, fctrs.List[j]]
			sep = ','
		}

		fmt.Println("")
	}
}