func main() {
   fmt.Println(factor(100))
   fmt.Println(factor(101))
}

func factor(num int) []int {
    factors := make([]int, 0) // creates a new vector for the factors of the number

    for i:= 1; i <= int(math.Sqrt(float64(num))); i++ { 
        if num % i == 0 {
            factors = append(factors, i) // pushes smallest factor to factors
            factors = append(factors, num/i) // pushes largest factor to factors
        }
    }
    sort.Ints(factors) // sorts the factors into numerical order for viewing purposes
    return factors 
}