In Go the equivalent code would be:

```go
package main

import (
	"fmt"
)

type Factors struct {
	list   []int
	count  int
}

func factor(num int, fctrs *Factors) *Factors {
	fctrs.list = nil
	fctrs.count = 0
	for dvsr := 1; dvsr*dvsr < num; dvsr++ {
		if num%dvsr == 0 {
			fctrs.list = append(fctrs.list, dvsr)
			fctrs.list = append(fctrs.list, num/dvsr)
            fctrs.count +=2
		}
	}
	if dvsr*dvsr == num {
		fctrs.list = append(fctrs.list, dvsr)
        fctrs.count++
	}
	return fctrs
}

func main() {
	nums2factor := []int{2059, 223092870, 3135, 45}
	ftors := Factors{}
	sep := ' '
    var i,j int

	for i = range nums2factor {
		factor(nums2factor[i], &ftors)
        fmt.Printf("\nfactors of %d are: \n  ", nums2factor[i]) 
		sep = ' '
		for j = range ftors.list {
            fmt.Printf("%c %d", sep, ftors.list[j])
			sep = ','
        }
	    fmt.Println()
	}
}
```
