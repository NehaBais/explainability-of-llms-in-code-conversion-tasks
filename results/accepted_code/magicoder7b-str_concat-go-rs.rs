fn main() {
    // text assigned to a String variable
    let mut s = String::from("hello");

    // output string variable
    println!("{}", s);

    // this output is required by current wording of task description.
    println!("{}{}", s, " literal");

    // concatenate variable and literal, assign result to another String variable
    let mut s2 = format!("{}{}", s, " literal");

    // output second string variable
    println!("{}", s2);
}
