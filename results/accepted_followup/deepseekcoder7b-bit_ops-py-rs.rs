fn main() {
    bitwise_built_ins(32, 16, 9);
}

fn bitwise_built_ins(width: u32, a: u32, b: u32) {
    let mask = (1 << width) - 1;

    println!("AND:     0b{:032b}\n& 0b{:032b}\n= "
             "0b{:032b}", a, b, (a & b) & mask);

    println!(
        "OR:      0b{:032b}\n|\
             0b{:032b}\n= \
             0b{:032b}",
        a,
        b,
        (a | b) & mask
    );

    // Rest of the bitwise operations...
}
