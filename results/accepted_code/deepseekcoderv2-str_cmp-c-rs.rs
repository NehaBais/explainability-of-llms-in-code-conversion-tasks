use std::cmp::Ordering;
use std::str::{self, Eq};

fn compare(a: &str, b: &str) {
    println!(
        "{} {} {} {} {} {}",
        a,
        a == b,
        a != b,
        if a > b { 1 } else { 0 },
        if a < b { 1 } else { 0 },
        (a >= b) as i32,
        (a <= b) as i32,
        b
    );
}

fn compare_case(a: &str, b: &str) {
    println!(
        "{} {} {} {} {} {} {}",
        a,
        str::eq(a, b),
        !str::eq(a, b),
        if str::cmp(a, b).is_gt() { 1 } else { 0 },
        if str::cmp(a, b).is_lt() { 1 } else { 0 },
        (str::cmp(a, b) != Ordering::Less) as i32,
        (str::cmp(a, b) != Ordering::Greater) as i32,
        b
    );
}

fn main() {
    let args: Vec<String> = std::env::args().collect();
    if args.len() < 3 {
        eprintln!("Usage: {} <string1> <string2>", args[0]);
        return;
    }

    let a = &args[1];
    let b = &args[2];

    println!("	eq , ne , gt , lt , ge , le");
    compare(a, b);
    compare_case(a, b);
}