The errors mean that `sort` package is not imported, so add "import ("sort")" at beginning of your Go code and for Assert function, import "testing" package and replace the assert function with "reflect.DeepEqual(factor(num), expectedFactors) != true { t.Errorf("Expected %v but got %v", expectedFactors, factor(num)) }".
```go
package main

import (
	"fmt"
	"math"
	"reflect"
	"testing"
)

func factor(num int) []int {
	factors := make([]int, 0)

	for i := 1; i <= int(math.Sqrt(float64(num)))+1; i++ {
		if num%i == 0 {
			factors = append(factors, i)     
			factors = append(factors, num/i)
		}
	}
	sort.Ints(factors) 
	return factors 
}

func TestFactor(t *testing.T) {
	expectedFactors := []int{1, 2, 4, 5, 10, 10, 20, 25, 50, 100}
	if reflect.DeepEqual(factor(100), expectedFactors) != true { 
		t.Errorf("Expected %v but got %v", expectedFactors, factor(100))
	}
	expectedFactors = []int{1, 101}
	if reflect.DeepEqual(factor(101), expectedFactors) != true { 
		t.Errorf("Expected %v but got %v", expectedFactors, factor(101))
	}
}
```
