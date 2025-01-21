#[macro_use]
extern crate libc;

use std::ascii::AsciiExt;
use std::env;
use std::ffi::CStr;
use std::os::raw::c_char;
use std::ptr;

fn compare(a: &str, b: &str) {
    println!(
        "{:<6}{:<2}{:<2}{:<2}{:<2}{:<2} {:<}",
        a,
        a == b,
        a != b,
        b > a,
        b < a,
        a.len() == b.len() && a > b,
        a.len() == b.len() && a < b,
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
    let args: Vec<String> = env::args().collect();

    println!("eq , ne , gt , lt , ge , le");
    for i in 0..args.len() - 1 {
        compare(&args[i], &args[i + 1]);
        compare_case_insensitive(&args[i], &args[i + 1]);
    }
}
