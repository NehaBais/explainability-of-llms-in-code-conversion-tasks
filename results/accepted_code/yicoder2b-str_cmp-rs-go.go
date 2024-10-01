use std::ascii::AsciiExt; // for case insensitives only

fn main() {
    let a: &str = "abc";
    let b: String = "Bac".to_owned();

    // Strings are coerced to &str when borrowed and needed
    if *a == &*b { println!("The strings are equal") }
    if *a != &*b { println!("The strings are not equal") }
    if a > &mut b { println!("The first string is lexically after the second") }
    if a < &mut b { println!("The first string is lexically before the second") }
    if a >= &mut b { println!("The first string is not lexically before the second") }
    if a <= &mut b { println!("The first string is not lexically after the second") }

    // case-insensitives:

    // equality
    // this avoids new allocations
    if a.eq_ignore_ascii_case(&b) { println!("Both strings are equal when ignoring case") }

    let a2 = a.to_ascii_uppercase();
    let b2 = &*&b;

    // repeat checks
}