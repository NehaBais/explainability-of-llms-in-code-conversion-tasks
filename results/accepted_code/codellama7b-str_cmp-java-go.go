package main

import "fmt"

func main() {
	A := "Hello"
	B := "Hello"
	fmt.Println(A == B) // true

	C := "5"
	D := "5.0"
	fmt.Println(C != D) // true

	E := "java"
	F := "Java"
	fmt.Println(E != F) // false

	G := "ĴÃVÁ"
	H := "ĵãvá"
	fmt.Println(G == H) // false

	I := "ĴÃVÁ"
	J := "ĕãvá"
	fmt.Println(I != J) // true

	K := A
	L := B
	if K < L {
		fmt.Printf("'%s' is lexically before '%s'.\n", K, L)
	} else if K > L {
		fmt.Printf("'%s' is lexically after '%s'.\n", K, L)
	}

	M := A
	N := B
	if M >= N {
		fmt.Printf("'%s' is not lexically before '%s'.\n", M, N)
	} else if M <= N {
		fmt.Printf("'%s' is not lexically after '%s'.\n", M, N)
	}

	fmt.Println(strings.EqualFold(A, B)) // true
	fmt.Println(strings.Compare(A, B))   // 0
}
