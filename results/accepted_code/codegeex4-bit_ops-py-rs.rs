fn rotr(width: usize, a: i32, n: usize) -> i32 {
    let mask = (1 << width) - 1;
    let mut a = a & mask;
    let mut n = n % width;
    ((a >> n) | ((a & ((1 << n) - 1)) << (width - n)))
}

fn rotl(width: usize, a: i32, n: usize) -> i32 {
    let mask = (1 << width) - 1;
    let mut a = a & mask;
    let mut n = n % width;
    (((a << n) & mask) | (a >> (width - n)))
}

fn asr(width: usize, a: i32, n: usize) -> i32 {
    let mask = ((1 << width) - 1) as i32;
    let top_bit_mask = 1 << (width - 1);
    if n < 0 {
        return (a << (-n)) & mask;
    } else if n == 0 || n >= width {
        return a;
    } else {
        let a = a & mask;
        if a & top_bit_mask != 0 {
            // Sign bit set?
            let signs = ((1 << n) - 1) as i32;
            return (a >> n) | (signs << (width - n));
        } else {
            return a >> n;
        }
    }
}

fn bitwise_built_ins(width: usize, a: i32, b: i32) {
    let mask = ((1 << width) - 1) as i32;
    println!(
        "    AND:     0b{:0width$b} & 0b{:0width$b} = 0b{:0width$b}\n",
        a,
        b,
        (a & b),
        width
    );
    println!(
        "    OR:      0b{:0width$b} | 0b{:0width$b} = 0b{:0width$b}\n",
        a,
        b,
        (a | b),
        width
    );
    println!(
        "    XOR:     0b{:0width$b} ^ 0b{:0width$b} = 0b{:0width$b}\n",
        a,
        b,
        (a ^ b),
        width
    );
    println!(
        "    NOT:   ~ 0b{:0width$b} = 0b{:0width$b}\n",
        a,
        !a & mask,
        width
    );
}

fn helper_funcs(width: usize, a: i32) {
    let mask = ((1 << width) - 1) as i32;
    let top_bit_mask = 1 << (width - 1);
    let aa = a | top_bit_mask;
    println!("    ROTR:   ");
    for n in vec![1, 2, 4] {
        println!(
            "               rotr({}, {}, {}) = 0b{:0width$b}",
            width,
            a,
            n,
            rotr(width, a, n),
            width
        );
    }
    println!("    ROTL:   ");
    for n in vec![1, 2, 4] {
        println!(
            "               rotl({}, {}, {}) = 0b{:0width$b}",
            width,
            a,
            n,
            rotl(width, a, n),
            width
        );
    }
    println!("    ASR:   ");
    for n in vec![1, 2, 4] {
        println!(
            "               asr({}, {}, {}) = 0b{:0width$b}",
            width,
            a,
            n,
            asr(width, a, n),
            width
        );
        println!(
            "               asr({}, {}, {}) = 0b{:0width$b}",
            width,
            aa,
            n,
            asr(width, aa, n),
            width
        );
    }
}

fn main() {
    bitwise_built_ins(8, 27, 125);
    helper_funcs(8, 27);
}
