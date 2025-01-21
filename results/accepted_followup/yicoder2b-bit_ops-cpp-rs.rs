fn bitwise(a: i32, b: i32) {
    let mut ua = a as u32; // Convert it to an unsigned integer for the rotation functions.

    // Perform the bitwise AND operation on a and b
    println!("a and b: {:08b} ({} & {}) => {:08b}", 1, a, b, a & b);

    // Perform the bitwise OR operation on a and b
    println!("a or b: {:08b} ({} | {}) => {:08b}", 2, a, b, a | b);

    // Perform the bitwise NOT operation on a
    println!("NOT a: {:08b} (~{}) => {:08b}", 3, a, ~a);

    // Perform the bitwise XOR operation on a and b
    println!("a xor b: {:08b} ({} ^ {}) => {:08b}",4, a, b, a ^ b);

    // Perform the bitwise left shift operation on ua and b
    println!("a << b: {:08b} ({} << {}) => {:08b}",5, a, b, a << b);

    // Perform the bitwise right shift operation on ua and b
    println!("a >> b: {:08b} ({} >> {}) => {:08b}",6, a, b, a >> b);

    // Perform the bitwise rotate left operation on ua and b
    println!("a rotl b: {:08b} (rot_left({}) << {} >> {}) => {:08b}",7, a, b, ua, b);

    // Perform the bitwise rotate right operation on ua and b
    println!("a rotl b: {:08b} (rot_right({}) << {} >> {}) => {:08b}",8, a, b, ua, b);
}