fn rotr<const W: usize>(width: W, a: u64, n: i64) -> u64 {
    if n < 0 {
        rotl(width, a, -n as u32)
    } else if n == 0 {
        a
    } else if n >= width as i64 {
        0xFFFFFFFFFFFFFFFF & (a >> (n % width as i64))
            | ((1 << (W - 1)) & a) << (width - n % W as u32)
    } else {
        let mask = (1u64 << width) - 1;
        let a_and_mask = a & mask;
        let top_bit_mask = (1u64 << (width - 1)) as u64;
        if a_and_mask & top_bit_mask != 0 {
            let signs = ((1u64 << n) - 1) << (W - n);
            a >> n | signs
        } else {
            a >> n
        }
    }
}

fn rotl<const W: usize>(width: W, a: u64, n: u32) -> u64 {
    if n == 0 {
        a
    } else if n >= width as u32 {
        0xFFFFFFFFFFFFFFFF & (a << (n % width as u32))
            | ((1u64 << (width - n % W)) - 1) & a >> (W - n % W)
    } else {
        let mask = (1u64 << width) - 1;
        let a_and_mask = a & mask;
        let top_bit_mask = (1u64 << (width - 1)) as u64;
        if a_and_mask & top_bit_mask != 0 {
            let signs = ((1u64 << n) - 1) << (W - n);
            a << n | signs
        } else {
            a << n
        }
    }
}

fn asr<const W: usize>(width: W, a: u64, n: i32) -> i64 {
    if n < 0 {
        (a as i64).wrapping_shl(-n as u32) >> (width - 1) as i32
    } else if n >= width as i32 {
        0xFFFFFFFFFFFFFFFF >> (n % width as u32)
            | ((1i64 << (W - n % W)) - 1) & a as i64 >> (W - n % W)
    } else {
        (a as i64).wrapping_shr(n as u32) >> (width - 1) as i32
    }
}

fn bitwise_built_ins<const W: usize>(width: W, a: u64, b: u64) {
    println!(
        "{:#0w}\tAND\t{:#0w}\n{:#0w}\tOR\t{:#0w}\n{:#0w}\tXOR\t{:#0w}",
        a & b,
        a | b,
        a ^ b
    );
}

fn main() {
    bitwise_built_ins(8, 27u64, 125u64);

    let a = 27u64;
    println!("{:#0w}\tRotR\t{:#0w}\n{:#0w}\tRotR\t{:#0w}\n{:#0w}\tRotR\t{:#0w}\n{:#0w}\tRotL\t{:#0w}\n{:#0w}\tRotL\t{:#0w}\n{:#0w}\tRotL\t{:#0w}",
        a, rotr(8, a, 1), rotr(8, a, 2), rotr(8, a, 4),
        rotl(8, a, 1), rotl(8, a, 2), rotl(8, a, 4));

    let aa = (a as i64).wrapping_shr(63) << 63;
    println!(
        "{:#0w}\tASR\t{:#0w}\n{:#0w}\tASR\t{:#0w}\n{:#0w}\tASR\t{:#0w}\n{:#0w}\tASR\t{:#0w}",
        a,
        asr(8, a, 1),
        asr(8, aa, 1),
        asr(8, a, 2),
        asr(8, aa, 2)
    );
}
