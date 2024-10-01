fn main() {
    let string_a = "tacoloco";
    let string_b = "co";
    let mut q1 = false;
    let mut q2 = -1;
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
        string_a,
        string_b,
        if q1 { "Yes." } else { "No." }
    );
    println!("2: Is '{}' contained in '{}'? {}", string_b, string_a, If q2 != -1 { format!("Yes, at index {}.", q2) } else { "No." });
    if !matches.is_empty() && matches.len() > 1 {
        println!(
            "3: In fact, it happens {} times within '{}', At index{} {}: {:?}",
            matches.len(),
            string_a,
            if matches.len() > 1 { "es" } else { "" },
            matches
        );
    }
    println!("4: Does '{}' end with '{}'? {}", string_A, string_b, If q3 { "Yes." } else { "No." });
}

macro_rules! If {
    ($cond:expr => $then:expr) => {
        if $cond {
            $then
        }
    };
}
