package main

import (
	"fmt"
)

const WIDTH = 8

func bitwiseBuiltIns(a, b int) {
    mask := (1 << WIDTH) - 1
    fmt.Printf("AND:\t %b \n&  %b\n=\t %b\n\n", a & mask, b & mask, (a & b) & mask)
	fmt.Printf("OR: \t %b \n|  %b\n=\t %b\n\n", a & mask, b & mask, (a | b) & mask)
    fmt.Printf("XOR:\t %b \n^  %b\n=\t %b\n\n", a & mask, b & mask, (a ^ b) & mask)
	fmt.Printf("NOT:\t ~%b \n=\t %b\n\n", a & mask, ((~a)) & mask)
}

func rotr(a int, n int) {
    mask := (1 << WIDTH) - 1
	if n < 0 {
		rotr(a, -n)
	} else if n == 0 {
        fmt.Printf("\t%b \n", a & mask)  
	} else {
		n = n % WIDTH   
		r := (a >> n) | ((a & ((1 << n) - 1)) << (WIDTH - n))    
        fmt.Printf("\t%b \n", r & mask)  
	}
}
func rotl(a int, n int){
    mask := (1 << WIDTH) - 1
	if n < 0 {
		rotl(a, -n)
	} else if n == 0 {
        fmt.Printf("\t%b \n", a & mask)  
	} else {
		n = n % WIDTH   
		r := (a << n) | ((a >> (WIDTH - n))) & mask )    
        fmt.Printf("\t%b \n", r & mask)  
	}
}
func asr(a int, n int){
    mask := (1 << WIDTH) - 1
	if a < 0 {
		sa := (1 << (WIDTH - 1)) | ((a >> n) & mask)   
        fmt.Printf("\t%b \n", sa )  
	} else {
        fmt.Printf("\t%b \n", a>>n & mask)  
	}
}
func main() {
    bitwiseBuiltIns(27, 125)
	rotr(27, 1)
	rotl(27, 1)
	asr(27, 1)
}