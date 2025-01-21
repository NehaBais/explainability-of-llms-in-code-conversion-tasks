Error: `usize` cannot be negated, which means that if q2 is -1, it doesn't represent an actual index and hence can't be used in a conditional statement.
Fix: Remove the negative sign from `q2 = -1;`.
Rewritten corrected code:

```rs
fn main() {
    let string_a = "tacoloco";
    let string_b = "co";
    let mut q1 = false;
    let mut q2 = 0; // removed -1
    let mut q3 = false;
    let mut matches: Vec<usize> = Vec::new();

    // stringA starts with stringB
    q1 = string_a.starts_with(string_b);

    // stringA contains stringB
    if let Some(index) = string_a.find(string_b) {
        q2 = index;
    }

    // multiple matches
    for (i, _) in string_a.match_indices(string_b).enumerate() {
        matches.push(i);
    }

    // stringA ends with stringB
    if let Some(index) = string_a.rfind(string_b) {
        q3 = index == (string_a.len() - string_b.len());
    }

    println!(
        "1: Does '{}' start with '{}'? {}",
        string_A,
        string_b,
        if q1 { "Yes." } else { "No." }
    );
    println!("2: Is '{}' contained in '{}'? {}", string_b, string_a, If q2 != 0 { format!("Yes, at index {}.", q2) } else { "No." });
    if !matches.is_empty() && matches.len() > 1 { // added > 1 for correctness
        println!("3: String '{}' contains multiple occurrences of '{}', their indexes are: {:?}", string_A, string_b, matches);
    } else if !matches.is_empty() && matches.len() == 1 { // added this for correctness
        println!("4: String '{}' contains only one occurrence of '{}', its index is: {}", string_A, string_b, matches[0]);
    } else {
        println!("5: String '{}' does not contain any occurrences of '{}'", string_A, string_b);
    }
    println!("6: String '{}' ends with '{}'? {}", string_A, string_b, if q3 { "Yes." } else { "No." });
}

macro_rules! If {
    ($e:expr) => { $e };
}
```
