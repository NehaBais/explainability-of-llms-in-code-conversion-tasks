fn main() {
    let width = 8;
    let a = 27;
    let b = 125;

    // Bitwise AND, OR, and XOR on two integers
    println!("Bitwise AND:");
    println!("a & b = {}", a & b);
    println!("a | b = {}", a | b);
    println!("a ^ b = {}", a ^ b);

    // Bitwise NOT on the first integer
    println!("Bitwise NOT:");
    println!("~a = {}", ~a);

    // Shifts and rotates
    println!("Shifts and rotates:");
    println!("a >> 1 = {}", a >> 1);
    println!("a << 1 = {}", a << 1);
    println!("rotr(width, a, n) = {}", rotr(width, a, 1));
    println!("rotl(width, a, n) = {}", rotl(width, a, 1));

    // Arithmetic shift right (sign preserving)
    println!("Arithmetic shift right:");
    println!("asr(width, a, n) = {}", asr(width, a, 1));
}

fn bitwise_built_ins(width: u8, a: i32, b: i32) {
    let mask: i32 = (1 << width) - 1;
    println!("a & b = {}", a & b);
    println!("a | b = {}", a | b);
    println!("a ^ b = {}", a ^ b);
}

fn rotr(width: u8, a: i32, n: i32) -> i32 {
    if n < 0 {
        rotl(width, a, -n)
    } else {
        a >> (n % width)
    }
}

fn rotl(width: u8, a: i32, n: i32) -> i32 {
    if n < 0 {
        a << (-n % width)
    } else {
        a << (n % width)
    }
}

fn asr(width: u8, a: i32, n: i32) -> i32 {
    if n < 0 {
        ((a >> (-n % width)) | ((1 << width) - 1)) as i32
    } else {
        (a >> (n % width)) as i32
    }
}
