pub fn bitwise(mut a: i32, mut b: u32) {
    b = match b as usize {
        b if b < 32 => b.try_into().unwrap(), // Convert usize to u32 and panic if it doesn't fit
        _ => 31, 
    };

    println!("a AND b: {}", a & (b as i32));
    // rest of the function remains the same...
}