fn main() {
    let a = 10;
    let width = 4;
    let mask = (1 << width) - 1;

    println!(
        "    AND:     0b{:0width$b} &= 0b{:0width$b} = 0b{:0width$b}",
        a,
        a & mask,
        width
    );
    println!(
        "    OR:      0b{:0width$b} |= 0b{:0width$b} = 0b{:0width$b}",
        a,
        a | mask,
        width
    );
    println!(
        "    XOR:     0b{:0width$b} ^= 0b{:0width$b} = 0b{:0width$b}",
        a,
        a ^ mask,
        width
    );
    println!(
        "    NOT:     ~ 0b{:0width$b} = 0b{:0width$b}",
        a,
        !(a) & mask,
        width
    );

    let n = 1;
    let shift = (width - n) % width;
    let rotate = (n + shift) % width;
    println!(
        "rotl:     0b{:0width$b} << {:0rotate$b} | 0b{:0a$b} >> {:0n$b} = 0b{:0result$b}",
        a,
        rotate,
        a,
        n,
        width,
        (a >> shift) | ((a << rotate) & mask)
    );
    println!(
        "rotr:     0b{:0width$b} >> {:0rotate$b} | 0b{:0a$b} << {:0n$b} = 0b{:0result$b}",
        a,
        rotate,
        a,
        n,
        width,
        (a << shift) & mask | (a >> rotate)
    );

    println!(
        " wrapping_shr:     0b{:0width$b} >> {:0n$b} = 0b{:0result$b}",
        a,
        n,
        (a as i32).wrapping_shr(n.try_into().unwrap()) as u32
    );
}
