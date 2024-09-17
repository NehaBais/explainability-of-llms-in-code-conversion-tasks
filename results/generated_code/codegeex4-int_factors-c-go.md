Below is the Go equivalent of your C code. The code utilizes slices and a helper function to append factors to these slices.

```go
package main

import (
	"fmt"
)

type Factors struct {
	List []int
}

func xferFactors(fctrs *Factors, flist ...int) {
	fctrs.List = append(fctrs.List, flist...)
}

func factor(num int, fctrs *Factors) {
	dvsr := 1
	for dvsr*dvsr < num {
		if num%dvsr != 0 {
			continue
		}
		xferFactors(fctrs, dvsr)
		if dvsr != num/dvsr {
			xferFactors(fctrs, num/dvsr)
		}
		dvsr++
	}

	if dvsr*dvsr == num {
		xferFactors(fctrs, dvsr)
	}
}

func main() {
	nums2factor := []int{2059, 223092870, 3135, 45}
	ftors := Factors{}
	for _, num := range nums2factor {
		factor(num, &ftors)
		fmt.Printf("factors of %d are:\n", num)
		for i, factor := range ftors.List {
			if i == 0 {
				fmt.Print(factor)
			} else {
				fmt.Printf(", %d", factor)
			}
		}
		ftors.List = nil
		fmt.Println()
	}
}
```

This program first initializes an empty slice of integers to store the factors. It then iterates through each number in `nums2factor`, computes its factors using the `factor` function, and appends these factors to the slice. Finally, it prints out the factors for each number.

Please note that Go handles memory management for slices automatically, so we don't need to manually allocate or reallocate memory as in C.
