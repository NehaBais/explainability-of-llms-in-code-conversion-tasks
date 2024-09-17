use bit::{BitSlice, BitVec};
use std::fmt;
use std::iter::FromIterator;

fn bitwise_built_ins(width: usize, a: u128, b: u128) {
    let mask = (1 << width) - 1;

    println!(
        "AND:\n\t0b{:0{}b}\n\t& 0b{:0{}b}\n\t= 0b{:0{}b}",
        a,
        width,
        b,
        width,
        (a & b) & mask,
        width
    );

    println!(
        "OR:\n\t0b{:0{}b}\n\t| 0b{:0{}b}\n\t= 0b{:0{}b}",
        a,
        width,
        b,
        width,
        (a | b) & mask,
        width
    );

    println!(
        "XOR:\n\t0b{:0{}b}\n\t^ 0b{:0{}b}\n\t= 0b{:0{}b}",
        a,
        width,
        b,
        width,
        (a ^ b) & mask,
        width
    );

    println!(
        "NOT:\n~ 0b{:0{}b}\n= 0b{:0{}b}",
        a, width, ~a & mask, width
    );
}

fn rotr(width: usize, a: u128, n: usize) -> u128 {
    let mut vec = BitVec::from_iter((0..width).map(|i| (a >> i & 1 != 0)));

    for _ in 0..n {
        vec.rotate_right(1);
    }

    let mut mask = BitVec::from_elem(width, false);
    mask[width - 1] = true; // set the sign bit (assuming width is at least one)
    vec &= mask;

    u128::from_bits(vec.into_boxed_slice())
}

fn rotl(width: usize, a: u128, n: usize) -> u128 {
    let mut vec = BitVec::from_iter((0..width).map(|i| (a >> i & 1 != 0)));

    for _ in 0..n {
        vec.rotate_left(1);
    }

    let mut mask = BitVec::from_elem(width, false);
    mask[width - 1] = true; // set the sign bit (assuming width is at least one)
    vec &= mask;

    u128::from_bits(vec.into_boxed_slice())
}

fn asr(width: usize, a: u128, n: usize) -> u128 {
    let mut vec = BitVec::from_iter((0..width).map(|i| (a >> i & 1 != 0)));

    for _ in 0..n {
        vec.rotate_right(1);

        // sign extend
        if vec[width - 1] {
            let mut mask = BitVec::from_elem(width, false);
            mask[width - 1] = true;

            for i in 0..n {
                vec[i] |= mask[i];
            }
        }
    }

    u128::from_bits(vec.into_boxed_slice())
}

fn helper_funcs(width: usize, a: u128) {
    println!(
        "ROTATIONS\n\t0b{:0{}b}\n\trotr({}, 0b{:0{}b}, 1)\n=       0b{:0{}b}",
        a,
        width,
        width,
        a,
        width,
        rotr(width, a, 1),
        width
    );

    println!(
        "      0b{:0{}b}\n\torotl({}, 0b{:0{}b}, 1)\n=       0b{:0{}b}",
        a,
        width,
        width,
        a,
        width,
        rotl(width, a, 1),
        width
    );
}

fn main() {
    bitwise_built_ins(8, 27, 125);
    helper_funcs(8, 27);
}
