
### C code:
```c
#include <stdio.h>
#include <string.h>

void print_match(int possible_match) {
    if (possible_match != -1) {
        printf("Found match at pos %d\n", possible_match);
    } else {
        printf("Did not find any matches\n");
    }
}

int main() {
    char s1[] = "abcd";
    char s2[] = "abab";
    char s3[] = "ab";
    
    // Determining if the first string starts with second string
    int result;
#ifdef _WIN64
    result = strncmp(s1, s3, strlen(s3));
#else
    result = strncmp(s1, s3, 2);
#endif
    if (result == 0) {
        printf("String starts with %s\n", s3);
    } else {
        printf("String does not start with %s\n", s3);
    }
    
    // Determining if the first string contains the second string at any location
#ifdef _WIN64
    result = strstr(s1, s3) - s1;
#else
    char *ptr = strstr(s1, s3);
    result = ptr ? (int)(ptr - s1) : -1;
#endif
    print_match(result);
    
    // Determining if the first string ends with the second string
#ifdef _WIN64
    int len2 = strlen(s2);
    char *endPtr = strchr(s2, s3[0]);
    result = endPtr ? (int)(endPtr - s2) : -1;
#else
    // Note: This is a simplified version of the logic for single byte string comparison.
    // In a more complex scenario, you'd need to consider multiple encodings and character sets.
    int len2 = strlen(s2);
    char *endPtr = strchr(s2, s3[0]);
    result = endPtr ? (int)(endPtr - s2) : -1;
#endif
    if (result != -1 && strlen(s2) == 1 && len2 > 1) {
        printf("String ends with %s\n", s3);
    } else {
        printf("String does not end with %s\n", s3);
    }
    
    return 0;
}
```

### Rust code:

fn print_match(possible_match: Option<usize>) {
    match possible_match {
        Some(match_pos) => println!("Found match at pos {}", match_pos),
        None => println!("Did not find any matches")
    }
}

fn main() {
    let s1 = "abcd";
    let s2 = "abab";
    let s3 = "ab";
    
    // Determining if the first string starts with second string
    assert!(s1.starts_with(s3));
    
    // Handling multiple occurrences for part 2: Finding all positions where s3 appears in s1
    println!("All matches of {} in {}:", s3, s1);
    for (index, _) in s1.match_indices(&s3).enumerate() {
        println!("Match at position {}", index + 1);
    }
    
    // Determining if the first string contains the second string at any location
    assert!(s1.contains(s3));
    print_match(s1.find(&s3)); // Found match at pos 0
    print_match(s1.find(&s2)); // Did not find any matches
    
    // Determining if the first string ends with the second string
    assert!(s2.ends_with(s3));
}


In Rust, you can use `starts_with`, `contains` for part 1 and 2 respectively. For handling multiple occurrences in part 2, we used the `match_indices` method to find all positions where s3 appears in s1.
