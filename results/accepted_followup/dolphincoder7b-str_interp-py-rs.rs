use std::fmt;

fn main() {
    let extra = "little";
    let new_str = format!("Mary had a {} lamb.", extra);
    println!("{}", new_str);
}
