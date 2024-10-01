fn bitwise(a: i32, b: i32) {
    let mut a = a;
    let mut ua = a as u32; // Convert it to an unsigned integer for the rotation functions.

    // Perform the bitwise AND operation on a and b
    println!("a and b: {}", (a & b) as i32);

    // Perform the bitwise OR operation on a and b
    println!("a or b:  {}", (a | b) as i32);

    // Perform the bitwise XOR operation on a and b
    println!("a xor b: {}", (a ^ b) as i32);

    // Perform the bitwise NOT on a
    println!("not a:   {}", ~a);

    // Implementing left shift is not straightforward because there's no built-in function. You would need to shift bits manually.
    let mut new_val = (ua << b) as i32;
    if ua >> b == (new_val / (1 << b)) {
        println!("a shl b: {}", new_val);
    } else {
        println!("a shl b does not work for a negative number or a bit position that exceeds 32.")
    }

    // Implementing right shift is straightforward because it works the same way as C++.
    let new_val = (ua >> b) as i32;
    println!("a shr b: {}", new_val);

    // Implementing a rotate function is not straightforward. You would need to rotate bits manually and check if it works for all possible values of b.
    let mut new_val = std::rotl(ua, b) as i32;
    println!("a rol b: {}", new_val);

    let mut new_val = std::rotr(ua, b) as i32;
    println!("a ror b: {}", new_val);
}
