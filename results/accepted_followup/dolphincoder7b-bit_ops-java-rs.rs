use std::ops::{BitAnd, BitOr};

fn bitwise(a: i32, b: i32) {
    println!("{} AND {} is {}", a, b, (a & b));
    println!("{} OR {} is {}", a, b, (a | b));
    println!("NOT {} is {}", !a);
    println!("{} XOR {} is {}", a ^ b, (a ^ b).count_ones());

    let bits = std::mem::size_of::<i32>() * 8;
    println!(
        "{} L-R shift {} places is: {:#?}",
        a,
        b,
        (a << (b % bits)) | (a >> ((bits - b) % bits)),
    );
}
