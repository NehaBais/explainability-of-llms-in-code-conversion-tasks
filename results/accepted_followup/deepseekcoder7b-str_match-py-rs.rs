extern crate regex; // Adding this at top of the program
use regex::Regex; // Using regex crate in the program

fn main() {
    let s1 = "abcd";
    let s2 = "ab";
    println!("{}", s1.starts_with(s2)); // returns true

    let s3 = "bb";
    println!("{}", s1.contains(s3)); // returns false

    println!("{}", s1.ends_with(s2)); //returns false

    // Handling multiple occurrences of a string for part 2 using regex

    let re = Regex::new(s2).unwrap(); // Creating new instance of regular expression
    for mat in re.find_iter(&s1) {
        println!("Matched: {}", &s1[mat.start()..mat.end()]); // returns "ab" at index 0 and 2
    }
}
