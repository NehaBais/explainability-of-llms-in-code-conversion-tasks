fn bitwise_operations(width: usize, a: u64, b: u64) {
    let mask = (1 << width as u64) - 1;
    println!(
        "\
AND:     0b{:0*{:x}} \n& 0b{:0*{:x}}\n= 0b{:0*{:x}}\n\
OR:      0b{:0*{:x}} \n| 0b{:0*{:x}}\n= 0b{:0*{:x}}\n\
XOR:     0b{:0*{:x}} \n^ 0b{:0*{:x}}\n= 0b{:0*{:x}}\n\
NOT:    ~0b{:0*{:x}}\n= 0b{:0*{:x}}\n",
        a & mask, width,
        b & mask, width,
        a & b & mask, width,
        a & mask, width,
        b & mask, width,
        (a | b) & mask, width,
        a & mask, width,
        b & mask, width,
        ((!a) as u64) & mask, width
    );
}
fn main() {
    bitwise_operations(8, 27, 125);
}