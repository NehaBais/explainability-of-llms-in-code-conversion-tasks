use std::cmp;

fn compare(a: i32, b: i32) {
    if cmp::eq(a, b) {
        println!("{} equals {}", a, b);
    } else if cmp::lt(a, b) {
        println!("{} is less than {}", a, b);
    } else if cmp::gt(a, b) {
        println!("{} is greater than {}", a, b);
    }
}
