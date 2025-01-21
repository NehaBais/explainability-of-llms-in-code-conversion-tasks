use std::cmp::{self, Ordering};

fn main() {
    let (A, B) = ("Hello", "Hello");
    compare(A, B);

    let (A, B) = ("5", "5.0");
    compare(A, B);

    let (A, B) = ("java", "Java");
    compare(A, B);

    let (A, B) = ("ĴÃVÁ", "ĴÃVÁ");
    compare(A, B);

    let (A, B) = ("ĴÃVá", "ĵãvá");
    compare(A, B);
}

fn compare(s1: &str, s2: &str) {
    if s1.eq(s2) {
        println!("'{}' and '{}' are lexically equal.", s1, s2);
    } else {
        println!("'{}' and '{}' are not lexically equal.", s1, s2);
    }

    if s1.eq_ignore_case(s2) {
        println!("'{}' and '{}' are case-insensitive lexically equal.", s1, s2);
    } else {
        println!("'{}' and '{}' are not case-insensitive lexically equal.", s1, s2);
    }

    match s1.cmp(s2) {
        Ordering::Less => println!("'{}' is lexically before '{}'.", s1, s2),
        Ordering::Greater => println!("'{}' is lexically after '{}'.", s1, s2),
        Ordering::Equal => println!("'{}' is not lexically before or after '{}'.", s1, s2),
    }
}