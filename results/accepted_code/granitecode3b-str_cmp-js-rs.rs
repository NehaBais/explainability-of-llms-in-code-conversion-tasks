fn main() {
    println!(
        "{} == {} {}",
        "abcd",
        "abcd",
        if "abcd" == "abcd" { "true" } else { "false" }
    );

    println!("{} === {} {}",
 "abcd",
 "abcd",
 if "abcd" === "abcd" { "true" } else { "false" });

    println!(
        "{} == {} {}",
        "123",
        "123",
        if "123" == "123" { "true" } else { "false" }
    );

    println!("{} === {} {}",
 "123",
 "123",
 if "123" === "123" { "true" } else { "false" });

    println!(
        "{} == {} {}",
        "ABCD",
        "abcd",
        if "ABCD" == "abcd" { "true" } else { "false" }
    );

    println!(
        "{} != {} {}",
        "123",
        "123",
        if "123" != "123" { "true" } else { "false" }
    );

    println!("{} !== {} {}",
 "123",
 "123",
 if "123" !== "123" { "true" } else { "false" });

    println!(
        "{} < {} {}",
        "abcd",
        "dcba",
        if "abcd" < "dcba" { "true" } else { "false" }
    );

    println!(
        "{} > {} {}",
        "abcd",
        "dcba",
        if "abcd" > "dcba" { "true" } else { "false" }
    );

    println!(
        "{} == {} {}",
        "ABCD".to_lowercase(),
        "abcd".to_lowercase(),
        if "ABCD".to_lowercase() == "abcd".to_lowercase() {
            "true"
        } else {
            "false"
        }
    );
}
