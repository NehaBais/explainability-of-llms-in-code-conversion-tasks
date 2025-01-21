#![crate_name = "str_cmp_c_rs"]

use std::cmp::{PartialEq, PartialOrd};
use std::str::{cmp, eq_ignore_ascii_case};

fn main() {
    let args: Vec<&str> = std::env::args().skip(1).collect();

    for i in 0..args.len() - 1 {
        println!(
            " {}{} {} {} {} {} {}",
            &args[i],
            eq_ignore_ascii_case(&args[i], &args[i + 1]),
            !eq_ignore_ascii_case(&args[i], &args[i + 1]),
            cmp(&args[i], &args[i + 1]) == Ordering::Greater,
            cmp(&args[i], &args[i + 1]) == Ordering::Less,
            cmp(&args[i], &args[i + 1]) == Ordering::GreaterEqual,
            cmp(&args[i], &args[i + 1]) == Ordering::LessEqual,
            cmp(&args[i], &args[i + 1]),
        );
    }

    for i in 0..args.len() - 1 {
        println!(
            " {}{} {} {} {} {} {}",
            &args[i],
            eq_ignore_ascii_case(&args[i], &args[i + 1]),
            !eq_ignore_ascii_case(&args[i], &args[i + 1]),
            cmp(&args[i], &args[i + 1]) == Ordering::Greater,
            cmp(&args[i], &args[i + 1]) == Ordering::Less,
            cmp(&args[i], &args[i + 1]) == Ordering::GreaterEqual,
            cmp(&args[i], &args[i + 1]) == Ordering::LessEqual,
            cmp(&args[i], &args[i + 1]),
        );
    }
}
