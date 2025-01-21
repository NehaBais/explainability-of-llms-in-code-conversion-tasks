use std::str::{compare, String};

fn main() {
    let s1 = String::from("Hello");
    let s2 = String::from("Hello");
    let s3 = String::from("5.0");
    let s4 = String::from("Java");
    let s5 = String::from("ĴÃVÁ");
    let s6 = String::from("ĵãvá");

    // Comparing two strings for exact match
    if s1 == s2 {
        println!("{} and {} are equal", s1, s2);
    } else {
        println!("{} and {} are not equal", s1, s2);
    }

    // Comparing two strings for case-insensitive exact match
    if s1.eq_ignore_ascii_case(&s2) {
        println!("{} and {} are equal (ignoring case)", s1, s2);
    } else {
        println!("{} and {} are not equal (ignoring case)", s1, s2);
    }

    // Comparing two strings for case-sensitive exact match
    if s1 == s2 {
        println!("{} and {} are equal", s1, s2);
    } else {
        println!("{} and {} are not equal", s1, s2);
    }
}
