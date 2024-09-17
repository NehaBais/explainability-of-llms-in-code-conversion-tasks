```go
package main

import "fmt"

type Factors struct {
	list  []int
	count int
}

func xferFactors(fctrs *Factors, flist []int, flix int) {
	newSize := fctrs.count + flix
	fctrs.list = append(fctrs.list, flist[:flix]...)
	fctrs.count = newSize
}

func factor(num int, fctrs *Factors) *Factors {
	flist := make([]int, 0, 301)
	flix := 0
	fctrs.count = 0
	fctrs.list = nil

	for dvsr := 1; dvsr*dvsr <= num; dvsr++ {
		if num%dvsr != 0 {
			continue
		}
		if flix == cap(flist) {
			xferFactors(fctrs, flist, flix)
			flix = 0
		}
		flist = append(flist, dvsr)
		flist = append(flist, num/dvsr)
		flix += 2
	}

	if dvsr*dvsr == num {
		flist = append(flist, dvsr)
		flix++
	}

	if flix > 0 {
		xferFactors(fctrs, flist, flix)
	}

	return fctrs
}

func main() {
	nums2factor := []int{2059, 223092870, 3135, 45}
	ftors := &Factors{nil, 0}
	sep := ' '

	for _, num := range nums2factor {
		factor(num, ftors)
		fmt.Printf("Factors of %d are:\n", num)
		for _, factor := range ftors.list {
			fmt.Printf("%c %d", sep, factor)
			sep = ','
		}
		fmt.Println()
	}
}
```

**Explanation:**

* The code uses structs to represent factors and a slice to store the factors.
* The `xferFactors()` function appends the factors to the `list` slice of the `Factors` struct.
* The `factor()` function iterates through the potential divisors of the number and adds them to the `flist` slice.
* In the `main()` function, we define the numbers to factor and call the `factor()` function for each number.
* The factors are then printed to the console.
