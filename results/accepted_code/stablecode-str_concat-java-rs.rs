fn main() {
    let s = String::from("hello");
    println!("{}", s + " literal");

    let s2 = format!("{}{}", s, " literal"));
    println!("{}", s2));
}