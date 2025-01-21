fn main() {
    let string_a = "tacoloco";
    let string_b = "co";

    // Check if the first string starts with the second string
    let q1 = string_a.starts_with(string_b);

    // Check if the first string contains the second string at any location
    let mut q2matches: Vec<usize> = vec![];
    for (i, _) in string_a.match_indices(&string_b) {
        q2matches.push(i);
    }
    let q2 = !q2matches.is_empty();

    // Check if the first string ends with the second string
    let q3 = string_a.ends_with(string_b);

    println!(
        "1: Does '{}' start with '{}'? {}",
        string_a,
        string_b,
        if q1 { "Yes." } else { "No." }
    );
    println!(
        "2: Is '{}' contained in '{}'{}? ",
        string_b,
        string_a,
        match (q2, q2matches.len()) {
            (_, 0) => ". No.",
            _ => format!(
                ", Yes. It happens {} times within '{}' at index{}",
                q2matches.len(),
                string_a,
                q2matches
                    .iter()
                    .map(|x| x.to_string())
                    .collect::<Vec<String>>()
                    .join(", ")
            ),
        }
    );
    println!(
        "3: Does '{}' end with '{}'? {}",
        string_a,
        string_b,
        if q3 { "Yes." } else { "No." }
    );
}
