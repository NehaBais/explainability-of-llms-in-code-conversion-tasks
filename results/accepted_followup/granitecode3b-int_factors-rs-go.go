for i := 1; i <= int((float64(num)/2 + 0.5); i++ ) { 
 if num%i == 0 {
 factors = append(factors, i) // appends smallest factor to factors
 factors = append(factors, num/i) // appends largest factor to factors
 }
}