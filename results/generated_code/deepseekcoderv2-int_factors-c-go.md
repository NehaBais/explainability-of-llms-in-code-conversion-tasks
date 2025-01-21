 Sure! Below is the equivalent Go code for the provided C code:

```go
package main

import (
	"fmt"
	"math"
)

type Factors struct {
	list  []int
	count int
}

func xferFactors(fctrs *Factors, flist []int, flix int) {
	newSize := fctrs.count + flix
	if newSize > len(fctrs.list) {
		fctrs.list = append(make([]int, 0, newSize), fctrs.list...)
	} else {
		fctrs.list = make([]int, newSize)
	}
	for ij, ix := 0, fctrs.count; ix < newSize; ij, ix = ij+1, ix+1 {
		fctrs.list[ix] = flist[ij]
	}
	fctrs.count = newSize
}

func factor(num int) *Factors {
	var fctrs Factors
	flist := make([]int, 301)
	flix := 0
	dvsr := 1
	for dvsr*dvsr < num {
		if num%dvsr != 0 {
			dvsr++
			continue
		}
		if flix == 300 {
			xferFactors(&fctrs, flist, flix)
			flix = 0
		}
		flist[flix] = dvsr
		flist[flix+1] = num / dvsr
		flix += 2
		dvsr++
	}
	if dvsr*dvsr == num {
		if flix == 300 {
			xferFactors(&fctrs, flist, flix)
			flix = 0
		}
		flist[flix] = dvsr
		flix++
	}
	if flix > 0 {
		xferFactors(&fctrs, flist, flix)
	}
	return &fctrs
}

func main() {
	nums2factor := []int{2059, 223092870, 3135, 45}
	for _, num := range nums2factor {
		fctrs := factor(num)
		fmt.Printf("Factors of %d are: \n", num)
		sep := ' '
		for j, f := range fctrs.list {
			if j > 0 {
				fmt.Print(", ")
			}
			fmt.Printf("%c %d", sep, f)
			sep = ','
		}
		fmt.Println()
	}
}
```

### Explanation:
1. **Struct and Function Definitions**:
   - In Go, we define a struct similar to C but use camel case for field names (`list` instead of `list`).
   - The `xferFactors` function is translated to modify the slice directly since Go slices are dynamically resizable.
   
2. **Main Function**:
   - The main function iterates over the numbers to compute their factors and prints them out.
   - The `factor` function computes the factors and returns a pointer to the `Factors` struct.

3. **Memory Management**:
   - In Go, memory management is handled using built-in functions like `append` for dynamic arrays, which simplifies allocation and resizing compared to C's `realloc`.

4. **Loop and Conditionals**:
   - The logic for computing factors remains mostly the same, but syntax differences (e.g., `for` loops) are adjusted according to Go conventions.

This Go code should function equivalently to the provided C code.
