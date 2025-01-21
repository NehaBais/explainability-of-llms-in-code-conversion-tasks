fn print_match(possible_match : Option<usize>) {
  match possible_match {
    Some(match_pos) = > println !("Found match at pos {}", match_pos),
    None = > println !("Did not find any matches")
  }
}
fn main() {
  let s1 = "abcd";
  let s2 = "abab";
  let s3 = "ab";

  // Determining if the first string starts with s3
  println !("{}", s1.starts_with(s3));

  // Determine if the first string ends with s3
  println !("{}", s1.ends_with(s3));

  // Count the occurrences of s3 in s1
  let count = s1.matches(s3).count();
  println !("Number of occurrences of {} in {}: {}", s3, s1, count);

  // Search for the first occurrence of s3 in s1
  let start_index = s1.find(s3).unwrap_or(s1.len());
  println !("First occurrence of {} in {} starts at index {}", s3, s1,
            start_index);
}