fn bitwise_built_ins(width: u32, a: u64, b: u64) {
    let mask = ((1 << width) - 1) as u64;

    println!("AND:\t\t0b{a:0{width}b}} 
            & 0b{b:0{width}b}}
            = 0b{(a & b) & mask :0{width}b}}",
        a = a,
        b = b,
        width = width,
    );

    println!(
        "OR:\t\t0b{a:0{width}b}} 
            | 0b{b:0{width}b}}
            = 0b{(a | b) & mask :0{width}b}}",
        a = a,
        b = b,
        width = width,
    );

    println!(
        "XOR:\t\t0b{a:0{width}b}} 
            ^ 0b{b:0{width}b}}
            = 0b{(a ^ b) & mask :0{width}b}}",
        a = a,
        b = b,
        width = width,
    );

    println!(
        "NOT:\t\t~ 0b{a:0{width}b}}
            = 0b{(~a) & mask :0{width}b}}",
        a = a,
        width = width,
    );
}

fn rotl(x: u64, n: u32) -> u64 {
    let mut result = x;

    for _ in 0..n {
        result = (result << 1) | (result & 0x555555555555555) | (result & 0x33333333333333));
    }

    result
}

fn main() {
    bitwise_built_ins(8, 27, 125);
}