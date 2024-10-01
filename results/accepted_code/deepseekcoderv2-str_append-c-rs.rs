fn main() {
    let mut str = "Good Morning".to_string();
    let cstr = " to all";
    let cstr2 = " !!!";

    // Append string using the '+' operator.
    str += cstr;

    println!("{}", str);
}
