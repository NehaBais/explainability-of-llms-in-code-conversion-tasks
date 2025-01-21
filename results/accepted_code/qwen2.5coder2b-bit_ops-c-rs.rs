fn bitwise(a: i32, b: i32) {
    let and = a & b;
    println!("a and b: {}", and);

    let or = a | b;
    println!("a or b: {}", or);

    let xor = a ^ b;
    println!("a xor b: {}", xor);

    let not_a = !a;
    println!("not a: {}", not_a);

    // Left shift
    let left_shift = a << b;
    println!("a << n: {}", left_shift);

    // Right shift (arithmetic)
    let right_shift = a >> b;
    println!("a >> n: {}", right_shift);

    // Convert to unsigned for logical shift
    let c: i32 = a;
    let c_unsigned = c as u32;
    let log_shift = c_unsigned >> b;
    println!("c >> b: {}", log_shift);

    return ();
}

fn main() {
    bitwise(5, 4);
}