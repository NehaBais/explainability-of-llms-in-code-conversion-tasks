fn main() {
    let s1 = "abcd".to_string();
    let s2 = "abab".to_string();
    let s3 = "ab";

    // Beginning
    if s1.starts_with(&s3) {
        println!("{} starts with {}", s1, s3);
    } else {
        println!("{} does not start with {}", s1, s3);
    }

    // End
    if s1.ends_with(&s3) {
        println!("{} ends with {}", s1, s3);
    } else {
        println!("{} does not end with {}", s1, s3);
    }

    // Anywhere
    let positions: Vec<usize> = s2.match_indices(s3).map(|(i, _)| i).collect();

    if !positions.is_empty() {
        for (i, position) in positions.into_iter().enumerate() {
            println!(
                "Found at position {}: {} starting at index {}",
                i + 1,
                &s2[position..position + s3.len()],
                position
            );
        }
    } else {
        println!("{} not found in {}", s3, s2);
    }
}
