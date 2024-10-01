fn main() {
    let my_string = "prepended to";
    let mut prepend = String::from("my string");
    println!("{}", &(my_string + &prepend));
}
