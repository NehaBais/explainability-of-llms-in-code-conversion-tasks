fn compare_strings(s1: &str, s2: &str) {
    if s1 == s2 {
        println!("{} and {} are equal", s1, s2);
    } else if s1 < s2 {
        println!("{} is less than {}", s1, s2);
    } else {
        println!("{} is greater than or equal to {}", s1, s2);
    }
}
