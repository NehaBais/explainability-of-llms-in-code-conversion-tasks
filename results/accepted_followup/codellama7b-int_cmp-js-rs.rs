use std::ptr::eq;
use std::ptr::gt;
use std::ptr::lt;

fn compare(a: i32, b: i32) {
    if eq(a, b) {
        println!("{} equals {}", a, b);
    } else if lt(a, b) {
        println!("{} is less than {}", a, b);
    } else if gt(a, b) {
        println!("{} is greater than {}", a, b);
    }
}
