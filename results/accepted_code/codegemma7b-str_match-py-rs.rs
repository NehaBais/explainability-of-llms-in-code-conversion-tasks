fn starts_with(s1: &str, s2: &str) -> bool {
    s1.starts_with(s2)
}

fn contains(s1: &str, s2: &str) -> bool {
    s1.contains(s2)
}

fn ends_with(s1: &str, s2: &str) -> bool {
    s1.ends_with(s2)
}

fn find_first_location(s1: &str, s2: &str) -> Option<usize> {
    s1.find(s2)
}

fn find_next_location(s1: &str, s2: &str, start_loc: usize) -> Option<usize> {
    s1.find(s2, start_loc + 1)
}

fn handle_multiple_occurrences(s1: &str, s2: &str) {
    let mut start_loc = find_first_location(s1, s2);
    while let Some(loc) = start_loc {
        println!("Location of match: {}", loc);
        start_loc = find_next_location(s1, s2, loc);
    }
}
