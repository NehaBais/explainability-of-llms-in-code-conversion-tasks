fn bitwise(mut a: i32, mut b: i32) {
    println!("a AND b: {:x}", a & b);
    println!("a OR b: {:x}", a | b);
    println!("a XOR b: {:x}", a ^ b);
    println!("NOT a: {:x}", ~a);
    println!("a << b: {:x}", (a as u32 << b) as i32); // left shift
    println!("a >> b: {:x}", (a as i32 >> b) as i32); // arithmetic right shift
    println!("a >>> b: {:x}", a >> b as u32); // logical right shift
    let mut tmp = ((a as u32 << b) as i32) as usize;
    tmp = (tmp << b) & 0xFFFFFFFF;
    println!("a rol b: {:x}", tmp as i32); //rotate left, requires C++17 and later
    let mut tmp = ((a as u32 >> b) as i32) & 0xFFFFFFFF;
    tmp |= (a as u32 << (((b - 1) % 32) + 1)) & 0xFFFFFFFF;
    println!("a ror b: {:x}", tmp as i32); //rotate right, requires C++17 and later
}