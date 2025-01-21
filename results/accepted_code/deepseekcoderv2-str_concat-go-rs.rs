fn main() {
    // text assigned to a string variable
    let s = "hello";

    // output string variable
    println!("{}", s);

    // concatenate variable and literal, assign result to another string variable
    let s2 = format!("{}{}", s, " literal");

    // output second string variable
    println!("{}", s2);
}