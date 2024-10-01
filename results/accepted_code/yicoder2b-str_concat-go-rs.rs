fn main() {
    let mut s = "hello"; // text assigned to a string variable
    println!("{}", &s); // output string variable

    // concatenate variable and literal, assign result to another string variable
    *s = &mut **s + " literal";

    // output second string variable
    println!("{}", s);
}
