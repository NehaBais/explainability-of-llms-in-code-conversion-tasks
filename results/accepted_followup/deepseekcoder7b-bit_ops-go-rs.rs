use std::convert::TryInto;
use std::fmt;

fn main() {
    let mut a = -460u16;
    let b = 6u8;
    bitwise(a, b);
}

fn bitwise<T: fmt::Debug + Copy + From<u16>, U: Copy>(mut a: T, b: U)
where
    <U as Copy>::Target: fmt::Debug,
{
    printlnz;
    let ua = a.clone().try_into().unwrap();
    let ub = b.clone().try_into().unwrap();

    // Bitwise AND operation
    let bitwise_and = ua & ub;
    printlnz;

    // Bitwise OR operation
    let bitwise_or = ua | ub;
    printlnz;
}
