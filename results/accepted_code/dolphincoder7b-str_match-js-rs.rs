use regex::Regex;
fn main() {
    let stringA = "tacoloco";
    let stringB = "co";
    let q1 = stringA.starts_with(stringB);
    let q2 = stringA.find(stringB).unwrap();
    let q2matches: Vec<_> = stringA
        .chars()
        .enumerate()
        .filter(|(_, &c)| c == stringB.chars().next())
        .map(|(i, _)| i)
        .collect();
    let q3 = stringA.ends_with(stringB);

    println!("1: Does '{}' start with {}? {}", stringA, stringB, if q1 { "Yes." } else { "No." });
    println!("2: Is '{}' contained in {}? {}", stringB, stringA, if ~q2 { format!("Yes, at index {}.", q2) } else { "No.".to_string() });
    if ~q2 && !q2matches.is_empty() {
        println!(
            "   In fact, it happens {} times within '{}', at indices: {}",
            q2matches.len(), stringA, q2matches.join(", ")
        );
    }
    println!("3: Does '{}' end with {}? {}", stringA, stringB, if q3 { "Yes." } else { "No." });
}