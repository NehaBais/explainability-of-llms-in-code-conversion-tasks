fn main() {
    let mut s = String::from("hello");
    println!("{}", s);

    // append a string literal to variable `s`
    s.push_str(", literal");
    println!("{}", &s);
}
