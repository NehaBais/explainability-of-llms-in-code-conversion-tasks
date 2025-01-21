fn bitwise(a: i32, b: i32) {
    let and_result = a & b;
    let or_result = a | b;
    let xor_result = a ^ b;

    println!("a AND b: {}", and_result);
    println!("a OR b: {}", or_result);
    println!("a XOR b: {}", xor_result);

    let not_a = !a;

    println!("NOT a: {}", not_a);

    println!("a << b: {}", a << b); // left shift
    println!("a >> b: {}", a >> b); // arithmetic right shift
    println!("a >>> b: {}", a >> b); // logical right shift
}

fn main() {
    bitwise(10, 5);
}