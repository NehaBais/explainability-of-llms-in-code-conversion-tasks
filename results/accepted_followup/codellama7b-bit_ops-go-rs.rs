fn main() {
    let a = -460;
    let b = 6;

    // Bitwise logical operations
    println!("{}", (a & b));
    println!("{}", (a | b));
    println!("{}", (a ^ b));
    println!("{}", (!a));

    // Logical shifts (unsigned left operand)
    println!("{}", (a << b));
    println!("{}", (a >> b));

    // Arithmetic shifts (signed left operand)
    println!("{}", (a << b));
    println!("{}", (a >> b));

    // Rotations
    println!("{}", ((a & !b) | (!!b)));
    println!("{}", ((a & !!b) | (b << b)));
}
