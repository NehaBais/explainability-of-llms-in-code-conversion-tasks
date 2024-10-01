fn main() {
    let stringA = String::from("tacoloco");
    let stringB = String::from("co");

    // Does `stringA` start with `stringB`?
    let q1 = stringA.starts_with(&stringB);

    // Is `stringB` contained in `stringA`?
    let q2 = stringA.contains(&stringB);

    // In fact, it happens how many times within 'stringA' and at which index?
    let q2multi = stringA.matches(&stringB).collect::<Vec<_>>();

    // Does `stringA` end with `stringB`?
    let q3 = stringA.ends_with(&stringB);

    println!(
        "1: Does '{}' start with '{}'? {}",
        &stringA,
        &stringB,
        if q1 { "Yes." } else { "No." }
    );
    if q2 {
        let indices = stringA.matches(&stringB).collect::<Vec<_>>();
        println!(
            "2: Is '{}' contained in '{}'? Yes, at index {}.",
            &stringB, &stringA, indices[0]
        );
    } else {
        println!("Is '{}' contained in '{}'? No.", &stringB, &stringA);
    };
    if q2 && (q2multi.len() > 1) {
        let indices: Vec<_> = stringA.matches(&stringB).collect();
        println!(
            "   In fact, it happens {} times within '{}', at index{} {}.",
            q2multi.len(),
            &stringA,
            if q2multi.len() > 1 { "es" } else { "" },
            indices.join(", ")
        );
    }
    println!(
        "3: Does '{}' end with '{}'? {}",
        &stringA,
        &stringB,
        if q3 { "Yes." } else { "No." }
    );
}
