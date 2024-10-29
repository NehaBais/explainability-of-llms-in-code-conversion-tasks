fn main() {
    let extra = String::from("little");
    // Using format! macro to interpolate our variables into a new_str string
    let new_str = format!("Mary had a {} lamb.", &extra);
    println!("{}", new_str);
}
