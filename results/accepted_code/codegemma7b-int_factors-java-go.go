import "sort"

func factors(n int64) []int64 {
	factors := []int64{n, 1}
	for test := n - 1; test >= int64(math.Sqrt(float64(n))); test-- {
		if n%test == 0 {
			factors = append(factors, test, n/test)
		}
	}
	sort.Slice(factors, func(i, j int) bool { return factors[i] < factors[j] })
	return factors
}