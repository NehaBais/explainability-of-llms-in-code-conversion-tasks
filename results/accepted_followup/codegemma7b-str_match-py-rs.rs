fn find_next_location(s1: &str, s2: &str, start_loc: usize) -> Option<usize> {
    s1.find(s2, start_loc + 1)
}
