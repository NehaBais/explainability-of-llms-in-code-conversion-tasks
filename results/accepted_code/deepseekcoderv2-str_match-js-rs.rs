fn main() {
    let string_a = "tacoloco";
    let string_b = "co";
    
    // stringA starts with stringB
    let q1 = &string_a[..string_b.len()] == string_b;
    println!("1: Does '{}' start with '{}'? {}", string_a, string_b, if q1 { "Yes." } else { "No." });
    
    // stringA contains stringB
    let q2 = string_a.find(string_b);
    match q2 {
        Some(index) => println!("2: Is '{}' contained in '{}'? Yes, at index {}.", string_b, string_a, index),
        None => println!("2: Is '{}' contained in '{}'? No.", string_b, string_a),
    }
    
    // multiple matches
    let mut q2matches = Vec::new();
    let re = regex::Regex::new(string_b).unwrap();
    for cap in re.captures_iter(&string_a) {
        if let Some(index) = cap.get(0).map(|m| m.start()) {
            q2matches.push(index);
        }
    }
    
    if !q2matches.is_empty() {
        println!("   In fact, it happens {} times within '{}', at index{} {}", 
                 q2matches.len(), string_a, if q2matches.len() > 1 { "es" } else { "" }, q2matches.join(", "));
    }
    
    // stringA ends with stringB
    let len_b = string_b.len();
    let q3 = &string_a[string_a.len().saturating_sub(len_b)..] == string_b;
    println!("3: Does '{}' end with '{}'? {}", string_a, string_b, if q3 { "Yes." } else { "No." });
}