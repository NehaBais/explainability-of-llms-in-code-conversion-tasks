fn bitwise_operations(width: u32, a: u64, b: u64) {
    let mask = (1 << width as u64) - 1;
    println!(
        "\
AND:     0b{:0width$x} \n& 0b{:0width$x}\n= 0b{:0width$x}\n\
OR:      0b{:0width$x} \n| 0b{:0width$x}\n= 0b{:0width$x}\n\
XOR:     0b{:0width$x} \n^ 0b{:0width$x}\n= 0b{:0width$x}\n\
NOT:    ~0b{:0width$x}\n= 0b{:0width$x}\n",
        a & mask,
        b & mask,
        a & b & mask,
        a & mask,
        b & mask,
        (a | b) & mask,
        a & mask,
        b & mask,
        ((!a) as u64) & mask
    );
}
fn main() {
    bitwise_operations(8, 27, 125);
}
