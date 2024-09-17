fn bitwise(a: i32, b: i32) -> i32 {
    let c = a as u32; // Convert signed integer into unsigned to perform logical right shift.
    let and_result = a & b;
    let or_result = a | b;
    let xor_result = a ^ b;
    let not_result = !a;
    let left_shift = a << b; // Left shift
    let arithmetic_right_shift = a >> b; // Arithmetic right shift (on most platforms)
    let logical_right_shift = c >> b; // Logical right shift
    println!("a and b: {}", and_result);
    println!("a or b: {}", or_result);
    println!("a xor b: {}", xor_result);
    println!("not a: {}", not_result);
    println!("a << n: {}", left_shift);
    println!("a >> n: {}", arithmetic_right_shift);
    println!("c >> b: {}", logical_right_shift);
    0
}
