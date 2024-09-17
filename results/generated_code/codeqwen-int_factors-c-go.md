Here is the conversion of your C code to Golang:

```go
package main

import (
	"fmt"
)

type Factors struct {
	list  []int
	count int
}

func xferFactors(fctrs *Factors, flist []int, flix int) {
	newSize := fctrs.count + flix
	if newSize > flix {
		fctrs.list = append(fctrs.list, make([]int, newSize-fctrs.count)...)
	} else {
		fctrs.list = make([]int, newSize)
	}
	for ij := 0; ij < flix; ij++ {
		fctrs.list[fctrs.count+ij] = flist[ij]
	}
	fctrs.count = newSize
}

func factor(num int, fctrs *Factors) *Factors {
	flist := make([]int, 301)
	flix := 0
	fctrs.count = 0
	fctrs.list = []int{}
	for dvsr := 1; dvsr*dvsr < num; dvsr++ {
		if num%dvsr != 0 {
			continue
		}
		if flix == 300 {
			xferFactors(fctrs, flist, flix)
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
		xferFactors(fctrs, flist, flix)
	}

	return fctrs
}

func main() {
	nums2factor := []int{2059, 223092870, 3135, 45}
	var ftors Factors
	var sep rune
	for i := 0; i < 4; i++ {
		ftors = *factor(nums2factor[i], &ftors)
		fmt.Printf("factors of %d are:\n  ", nums2factor[i])
		sep = ' '
		for j := 0; j < ftors.count; j++ {
			if sep != ' ' {
				fmt.Print(string(sep))
			}
			fmt.Print(ftors.list[j])
			sep = ','
		}
		fmt.Println()
	}
}
```

This code performs the same task as your C code but in a slightly different way. It uses slices instead of dynamic arrays, and it uses rune type for the separator character to print comma or space. Note that Go doesn't have "short int" or "int*", so I made an assumption that `count` is an int. Also note that in C code, we are using realloc function to resize dynamic array which may not be present in Golang, so the resizing part is not included in this conversion.
