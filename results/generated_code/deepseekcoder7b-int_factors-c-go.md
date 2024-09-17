The equivalent Golang code is as follows:

```go
package main

import (
	"fmt"
)

type Factors struct {
	list []int
	count int
}

func xferFactors(fctrs *Factors, flist []int, flix int)  {
    newSize := fctrs.count + flix
	fctrs.list = make([]int, newSize)
	for ix, ij:= 0, 0; ix < newSize; ij++ {
		fctrs.list[ix] = flist[ij]
	}
	fctrs.count = newSize
}

func factor(num int, fctrs *Factors) *Factors {
    var flist []int
	var flix = 0;
	fctrs.count = 0;
	flist = make([]int, 301)
	for dvsr:= 1; dvsr*dvsr <= num; dvsr++ {
		if num % dvsr != 0 { continue }
        if flix == 300 {
            xferFactors(fctrs, flist, flix)
			flix = 0
		}
		flist[flix] = dvsr
		flist[flix+1] = num/dvsr
		flix += 2
	}
	if dvsr*dvsr == num { 
        flist[flix] = dvsr;
		flix++;
    }
	if flix > 0 { xferFactors(fctrs, flist, flix) }
	return fctrs
}
        
func main() {
	nums2factor := []int{ 2059, 223092870, 3135, 45 }
    ftors := &Factors{}
	var sep string = ""
	for i:= 0; i<len(nums2factor); i++ {
		factor( nums2factor[i], ftors)
        fmt.Printf("factors of %d are:\n", nums2factor[i])
		sep = " ,"
		for j:= 0; j<ftors.count; j++ {
			fmt.Print(sep, ftors.list[j])
            sep = ", "
        }
        fmt.Print("\n")
    }
}
```

