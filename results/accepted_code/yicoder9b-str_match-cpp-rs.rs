fn main() {
    let s1 = String::from("abcdabab");
    let s2 = String::from("ab");

    //Beginning
    if s1.starts_with(&s2[..]) {
        println!("{} starts with {}", s1, s2);
    }

    //End
    if s1.ends_with(&s2[..]) {
        println!("{} ends with {}", s1, s2);
    }

    //Anywhere
    let mut loc = s1.find(&s2[..]);
    while let Some(i) = loc {
        println!("{} found at index {} in {}", s2, i, s1);
        loc = s1[i + 1..].find(&s2[..]);
    }
}
