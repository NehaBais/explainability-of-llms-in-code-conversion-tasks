package main

import "fmt"

func main() {
	adjective := "big"
	lyric := fmt.Sprintf("Mary had a %s lamb", adjective)
	fmt.Println(lyric)
}
