use std::process::exit;
fn logic_and(a: &bool, b: &bool) -> bool {
    if (*a && *b) == true {
        return true;
    } else {
        return false;
    }
}
fn logic_or(a: &bool, b: &bool) -> bool {
    if (*a || *b) == true {
        return true;
    } else {
        return false;
    }
}
fn main() {
    let a = true;
    let b = false;
    println!("{}", logic_and(&a, &b)); // Output: false
    println!("{}", logic_or(&a, &b)); // Output: true
    println!("{}", !a); // Output: false
}
