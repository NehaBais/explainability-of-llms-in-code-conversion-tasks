extern crate libc;

use std::ffi::{CStr, CString};
use std::os::raw::c_char;
use std::ptr;

fn compare(a: &str, b: &str) {
    println!(
        "{:<6}{:<2}{:<2}{:<2}{:<2}{:<2} {:<}",
        a,
        a == b,
        a != b,
        a > b,
        a < b,
        a >= b,
        b
    );
}

fn compare_case_insensitive(a: &str, b: &str) {
    println!(
        "{:<6}{:<2}{:<2}{:<2}{:<2}{:<2} {:<}",
        a,
        a.eq_ignore_ascii_case(b),
        !a.eq_ignore_ascii_case(b),
        b.to_lowercase() > a.to_lowercase(),
        b.to_lowercase() < a.to_lowercase(),
        b.len() == a.len() && (&b.to_lowercase()[..] >= &a.to_lowercase()[..]),
        b.len() == a.len() && (&b.to_lowercase()[..] <= &a.to_lowercase()[..]),
        b
    );
}

fn main() {
    let args: Vec<String> = std::env::args().collect();

    println!("eq , ne , gt , lt , ge , le");
    for i in 0..args.len() - 1 {
        compare(&args[i], &args[i + 1]);
        compare_case_insensitive(&args[i], &args[i + 1]);
    }
}
