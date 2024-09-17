factor(n) {
    initialize empty array factors1 and factors2

    for x from 1 to square root of n {
        if n is divisible by x {
            add x to the end of factors1
            append (n divided by x) to the end of factors2
        }
    }

    if square of (last element of factors1 + 1) equals n {
        add last element of factors1 + 1 to the end of factors1
    }

    reverse factors2 and append all elements of factors2 to the end of factors1
    
    return factors1
}