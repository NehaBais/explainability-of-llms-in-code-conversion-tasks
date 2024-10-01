fn starts_with(container: &str, target: &str) -> bool {
    container.starts_with(target)
}

fn ends_with(container: &str, target: &str) -> bool {
    container.ends_with(target)
}

fn does_contain(container: &str, target: &str) -> bool {
    container.contains(target)
}

fn print_locations(container: &str, target: &str) {
    if let Some(index) = container.find(target) {
        println!("Found '{}' at index {}.", target, index);
    }
}

fn main() {
    let s1 = "Hello";
    let t1 = "Hell";

    let s2 = "Code";
    let t2 = "ode";

    let s3 = "Google";
    let t3 = "msn";

    println!(
        "Starts with Test ( {},{} ) : {}",
        s1,
        t1,
        starts_with(s1, t1)
    );
    println!("Ends with Test ( {},{} ) : {}", s2, t2, ends_with(s2, t2));
    println!("Contains Test ( {},{} ) : {}", s3, t3, does_contain(s3, t3));
    print_locations(s1, t1);
}
