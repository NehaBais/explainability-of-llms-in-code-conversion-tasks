fn main() {
    let s1 = "abcd";
    let s2 = "abab";
    let s3 = "ab";
    //Start
    println!("{}", s1.starts_with(&s3));
    //End
    println!("{}", &s1[&s1.len() - s3.len() as isize..] == &s3);
    //Anywhere
    let loc = s2.find(s3).unwrap_or(s2.len()); //returns usize
    println!("{}", s2[loc + 1..] == &s3);
}
