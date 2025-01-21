package main

import (
	"fmt"
	"math"
	"os"
	"strconv"
)

func main() {
	args := os.Args[1:]
	a, err := strconv.Atoi(args[0])
	if err != nil {
		panic(err)
	}
	b, err := strconv.Atoi(args[1])
	if err != nil {
		panic(err)
	}

	fmt.Printf("sum:              %dnndifference:       %dnnproduct:          %dnainteger quotient: %dnnremainder:        %dnnexponentiation:   %d", a+b, a-b, a*b, a/b, a%b, int(math.Pow(float64(a), float64(b))))
}
