package main

import (
    "fmt"
)

func compare(a interface{}, b interface{}) {
    fmt.Printf("%v is of type %T and %v is of type %T\n", a, typeOf(a), b, typeOf(b))
    switch a.(type) {
        case int:
            if a.(int) < b.(int) {
                fmt.Println(a, "is strictly less than ", b)
            }
            if a.(int) <= b.(int) {
                fmt.Println(a, "is less than or equal to ", b)
            }
            if a.(int) > b.(int) {
                fmt.Println(a, "is strictly greater than ", b)
            }
            if a.(int) >= b.(int) {
                fmt.Println(a, "is greater than or equal to ", b)
            }
        case string:
            if a.(string) < b.(string) {
                fmt.Println(a, "is strictly less than ", b)
            }
            if a.(string) <= b.(string) {
                fmt.Println(a, "is less than or equal to ", b)
            }
            if a.(string) > b.(string) {
                fmt.Println(a, "is strictly greater than ", b)
            }
            if a.(string) >= b.(string) {
                fmt.Println(a, "is greater than or equal to ", b)
            }
        case float64:
            if a.(float64) < b.(float64) {
                fmt.Println(a, "is strictly less than ", b)
            }
            if a.(float64) <= b.(float64) {
                fmt.Println(a, "is less than or equal to ", b)
            }
            if a.(float64) > b.(float64) {
                fmt.Println(a, "is strictly greater than ", b)
            }
            if a.(float64) >= b.(float64) {
                fmt.Println(a, "is greater than or equal to ", b)
            }
    }
}

func typeOf(x interface{}) string {
    switch x := x.(type) {
    case int:
        return "int"
    case string:
        return "string"
    case float64:
        return "float64"
    default:
        return "unknown"
    }
}

func main() {
    compare('YUP', 'YUP')
    compare('BALL', 'BELL')
    compare('24', '123')
    compare(24, 123)
    compare(5.0, 5)
}