This is how you can convert the given Rust code to Python using the Cargo test framework:

use std::fs;
use std::str;

fn print_match(possible_match: Option<usize>) {
    match possible_match {
        Some(match_pos) => println!("Found match at pos {}", match_pos),
        None => println!("Did not find any matches"),
    }
}

fn main() -> Result<(), std::io::Error> {
    let s1 = "abcd";
    let s2 = "abab";
    let s3 = "ab";

    // Determining if the first string starts with second string
    assert!(s1.starts_with(s3));

    // Determining if the first string contains the second string at any location
    assert!(s1.contains(s3));

    // Print the location of the match
    print_match(s1.find(s3));  // Found match at pos 0
    print_match(s1.find(s2));  // Did not find any matches

    // Determining if the first string ends with the second string
    assert!(s2.ends_with(s3));

    Ok(())
}

Now, let's run this code:

```python
from typing import Optional

def print_match(possible_match: Optional[int]):
    if possible_match is not None:
        print("Found match at pos", possible_match)
    else:
        print("Did not find any matches")

def main():
    s1 = "abcd"
    s2 = "abab"
    s3 = "ab"

    # Determining if the first string starts with second string
    assert s1.startswith(s3)

    # Determining if the first string contains the second string at any location
    assert s1.find(s3) != -1

    # Print the location of the match 
    print_match(s1.index(s3))  # Found match at pos 0
    print_match(s1.find(s2))  # Did not find any matches

    # Determining if the first string ends with the second string
    assert s2.endswith(s3)

    matches = []

    while s1.find(s3, start=pos) != -1:
        pos = s1.find(s3, start=pos) + 1
        matches.append(pos - 1)

    if len(matches):
        print("Found matches at pos", ', '.join(str(m) for m in matches))
    else:
        print("Did not find any matches")

if __name__ == "__main__":
    main()
```

This code should work as expected, but it's important to note that Python uses `str` for strings instead of using `String`. In Rust, you can use `str` as well as `&str`, which is a reference to an immutable string slice. This means the type returned from `find()` and `index()` functions are `usize` (unsigned integer), not `Optional[int]`. 

This code will search for the occurrence of `s3` in `s1`, starting from position 0, and add the positions to a list until no more occurrences are found. Then it prints all the positions found using Python's `join()` function to join the elements of the list into a single string separated by commas.
