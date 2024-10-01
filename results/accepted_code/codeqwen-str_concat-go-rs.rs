fn main() {
    // text assigned to a string variable
    let mut s = String::from("hello");

    // output string variable
    println!("{}", &s);

    // concatenate variable and literal, assign result to another string variable
    s.push_str(" literal");

    // output second string variable
    println!("{}", &s);
}
