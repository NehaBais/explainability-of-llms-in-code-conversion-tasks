use str::{compare, String};

fn main() {
    let s1 = String::from("Hello");
    let s2 = String::from("Hello");
    let s3 = String::from("5.0");
    let s4 = String::from("Java");
    let s5 = String::from("ĴÃVÁ");
    let s6 = String::from("ĵãvá");

    // Comparing two strings for exact equality
    if s1 == s2 {
        println!("'{}' and '{}' are lexically equal.", s1, s2);
    } else {
        println!("'{}' and '{}' are not lexically equal.", s1, s2);
    }

    // Comparing two strings for inequality (i.e., the inverse of exact equality)
    if s1 != s2 {
        println!("'{}' and '{}' are not lexically equal.", s1, s2);
    } else {
        println!("'{}' and '{}' are lexically equal.", s1, s2);
    }

    // Comparing two strings to see if one is lexically ordered before the other
    if s3 < s4 {
        println!("'{}' is lexically before '{}'.", s3, s4);
    } else {
        println!("'{}' is not lexically before '{}'.", s3, s4);
    }

    // Comparing two strings to see if one is lexically ordered after the other
    if s5 > s6 {
        println!("'{}' is lexically after '{}'.", s5, s6);
    } else {
        println!("'{}' is not lexically after '{}'.", s5, s6);
    }

    // Comparing two strings with case-sensitive comparison
    if s1.compare(s2) == 0 {
        println!("'{}' and '{}' are case-sensitive lexically equal.", s1, s2);
    } else {
        println!(
            "'{}' and '{}' are not case-sensitive lexically equal.",
            s1, s2
        );
    }

    // Comparing two strings with case-insensitive comparison
    if s1.compare_ignore_case(s2) == 0 {
        println!(
            "'{}' and '{}' are case-insensitive lexically equal.",
            s1, s2
        );
    } else {
        println!(
            "'{}' and '{}' are not case-insensitive lexically equal.",
            s1, s2
        );
    }
}
