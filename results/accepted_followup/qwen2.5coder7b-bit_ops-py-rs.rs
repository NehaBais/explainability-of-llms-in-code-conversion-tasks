fn print_bin(num: u32, width: usize) {
    println!("{:0width$b}", num, width = width);
}

fn bitwise_built_ins(width: usize, a: u32, b: u32) {
    let mask = (1 << width) - 1;

    println!(
        "AND:     {:0width$b}\n       & {:0width$b}\n       = {:0width$b}",
        a,
        b,
        (a & b) & mask,
        width = width
    );

    println!(
        "\nOR:      {:0width$b}\n       | {:0width$b}\n       = {:0width$b}",
        a,
        b,
        (a | b) & mask,
        width = width
    );

    println!(
        "\nXOR:     {:0width$b}\n       ^ {:0width$b}\n       = {:0width$b}",
        a,
        b,
        (a ^ b) & mask,
        width = width
    );

    println!(
        "\nNOT:   ~ {:0width$b}\n       = {:0width$b}",
        a,
        (!a) & mask,
        width = width
    );
}

fn rotr(width: usize, mut a: u32, n: isize) -> u32 {
    if n < 0 {
        return rotl(width, a, -n);
    } else if n == 0 {
        return a;
    }

    let mask = (1 << width) - 1;
    a &= mask;
    let n = (n % width as isize) as usize;

    (a >> n) | ((a & ((1 << n) - 1)) << (width - n))
}

fn rotl(width: usize, mut a: u32, n: isize) -> u32 {
    if n < 0 {
        return rotr(width, a, -n);
    } else if n == 0 {
        return a;
    }

    let mask = (1 << width) - 1;
    a &= mask;
    let n = (n % width as isize) as usize;

    ((a << n) & mask) | (a >> (width - n))
}

fn asr(width: usize, mut a: i32, n: isize) -> i32 {
    let mask = (1 << width) as i32 - 1;
    let top_bit_mask = 1 << (width - 1);

    if n < 0 {
        return a << -n & mask;
    } else if n == 0 {
        return a;
    }

    if n >= width {
        return if a & top_bit_mask != 0 { -1 } else { 0 };
    }

    let n = n as usize;
    a &= mask;

    if a & (1 << (width - n - 1)) != 0 {
        -(a >> n + 1) | (1 << (width - n - 2))
    } else {
        a >> n
    }
}

fn helper_funcs(width: usize, a: u32) {
    let aa = (a as i32) & ((1 << width) - 1);

    print_bin(a, width);
    print_bin(aa as u32, width);

    println!("\nROTR");

    for n in &[1, 2, 4] {
        print!("   {:0width$b} ", rotr(width, a, *n), width = width)
    }

    println!();

    for n in &[1, 2, 4] {
        print!("   {:0width$b} ", rotr(width, aa as u32, *n), width = width)
    }

    println!("\nROTL");

    for n in &[1, 2, 4] {
        print!("   {:0width$b} ", rotl(width, a, *n), width = width)
    }

    println!();

    for n in &[1, 2, 4] {
        print!("   {:0width$b} ", rotl(width, aa as u32, *n), width = width)
    }

    println!("\nASR");

    for n in &[1, 2, 4] {
        print!("   {:0width$b} ", asr(width, a, *n), width = width)
    }

    println!();

    for n in &[1, 2, 4] {
        print!("   {:0width$b} ", asr(width, aa as u32, *n), width = width)
    }
}

fn main() {
    bitwise_built_ins(8, 27, 125);
    helper_funcs(8, 27);
}
