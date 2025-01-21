use std::fmt;

fn bitwise(a: i16, b: u8) {
    println!("a:     {:016b}", a);
    println!("b:     {:016b}", b);

    // Bitwise logical operations
    println!("and:   {:016b}", a & (i16::from(b)));
    println!("or:    {:016b}", a | (i16::from(b)));
    println!("xor:    {:016b}", a ^ (i16::from(b)));

    let a_as_u32 = a as u32;
    let b_as_u8 = b as u8;
    let a_as_i32 = a as i32;

    // Arithmetic shifts
    println!("shr:   {:016b}", (a_as_u32 >> b_as_u8) as i16);
    println!("shl:   {:016b}", (a_as_i32 << b_as_u8) as i16);

    // Logical shifts
    println!("shr:   {:016b}", (a_as_u32 >> b_as_u8));
    println!("shl:   {:016b}", (a_as_i32 << b_as_u8) as u32);
}

fn main() {
    let a = -460;
    let b: u8 = 6;

    bitwise(a, b);
}
