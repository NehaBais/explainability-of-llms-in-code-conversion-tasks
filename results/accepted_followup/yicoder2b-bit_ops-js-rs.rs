use std::ops::{BitAnd, BitOr, BitXor};

fn main() {
    let a = 5; //101 in binary
    let b = 3;// 011 in binary

    let AND = a & b;      //bitwise and --> 101 AND 011=001
    let OR = a | b;       // bitwise or  --> 101 OR 011=111
    let XOR = a ^ b;      // bitwise xor --> 101 XOR 011=110
    let NOT = ~a & (2 << 8); // NOT --> ~5 AND (2 << 8)==-6 which is -94 in decimal
                            // the second parameter should be equal to the number of bits in your integer type (-1 for signed integers, or the maximum value if unsigned). But here we are using a bitwise shift operator which works on each byte of int (8 bits) and considering it as 2 bytes for simplicity

    println!("a AND b: {}", AND);
    println!("a OR b: {}", OR);
    println!("a XOR b: {}", XOR);
    println!("NOT a: {}", NOT & a);
}