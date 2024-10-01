func booleanOps(a, b bool) {
    fmt.Printf("%t and %t -> %t\n", a, b, a && b)
    fmt.Printf("%t or %t -> %t\n", a, b, a || b)
    fmt.Printf("%t xor %t -> %t\n", a, b, a != b)
    fmt.Printf("not %t -> %t\n", a, !a)
}

func main() {
    booleanOps(true, true)
    booleanOps(true, false)
    booleanOps(false, true)
    booleanOps(false, false)
}