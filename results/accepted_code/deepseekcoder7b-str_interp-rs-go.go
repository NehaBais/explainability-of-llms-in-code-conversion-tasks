package main

import "fmt"

func main() {
    fmt.Println("Mary had a %v lamb", "little")
    
    // You can specify order
    fmt.Println("%v had a %v lamb", "Mary", "little")
        
    // Or named arguments if you prefer
    fmt<｜begin▁of▁sentence｜> := map[string]interface{}{"name": "Mary", "adj":"little"}
    fmt.Printf("%s had a %s lamb\n", s["name"], s["adj"])
}