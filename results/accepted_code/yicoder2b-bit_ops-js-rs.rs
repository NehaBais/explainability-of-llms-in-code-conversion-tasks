fn bitwise(a: i32, b: i32) {
    let AND = a & b;
    let OR = a | b;
    let XOR = a ^ b;
    let NOT = ~a; 

    println!("a AND b: {}", AND);
    println!("a OR b: {}", OR);
    println!("a XOR b: {}", XOR);
    println!("NOT a: {}", NOT & a);

    // Left shift
    let left_shift = a << b; 
    println!("a << b: {}", left_shift);  

    // Arithmetic right shift
    let arith_right_shift = a >> b;
    println!("a >> b: {}", arith_right_shift);   

    // Logical right shift
    let logical_right_shift = (a as u32) >> b as i32;
    println!("a >>> b: {}", logical_right_shift);  
}