fn bitwise(a: i32, b: i32) {
    println!("a rol b: {}", a.rotate_left(b as u32)); //rotate left, Java 1.5+
    println!("a ror b: {}", a.rotate_right(b as u32)); //rotate right, Java 1.5+
}
