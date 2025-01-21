fn main() {
    let mut s1 = String::from("hello"));

    println!("{}", s1 + " world");

    let mut s2 = format!("{}{}", &s1, " world"));
    println!("{}", s2));

    let words: Vec<&str> = vec!["world", "mom"];
    let s3: String = ., 
     ".join(words.iter().map(|s| s.to_string()))));
    println!("{}", s3));
}