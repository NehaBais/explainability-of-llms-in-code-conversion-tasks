fn bitwise(a: i32, b: i32) {
    println!("a and b: {}", a & b);
    println!("a or b:  {}", a | b);
    println!("a xor b: {}", a ^ b);
    println!("not a:   {:?}", !a);

    println!("a shl b: {}", a << b);
    println!("a shr b: {}", a >> b);
    let ua = a as u32;
    println!("a lsr b: {}", ua >> b);

    println!("a rol b: {}", ua.rotate_left(b.try_into().unwrap()));
    println!("a ror b: {}", ua.rotate_right(b.try_into().unwrap()));
}
