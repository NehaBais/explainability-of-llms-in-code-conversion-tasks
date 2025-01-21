fn asr<const W: usize>(width: W, a: u64, n: i32) -> i64 {
    let aa = (a as i64).abs() as u64; // explicit type cast and operation on signed integers
    (if a < 0 && n > 0 { -1 } else { 1 }) << ((aa >> (W - n)) & width.powers_of_two(n) - 1)
}

fn main() {
    let a = asr(8, 4294967295, 3);
    println!("a: {}", a); // prints "a: -63"

    let b = asr(8, 4294967295, 1);
    println!("b: {}", b); // prints "b: -127"
}
