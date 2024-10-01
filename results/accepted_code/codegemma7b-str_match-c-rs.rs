use std::str;

fn starts_with(container: &str, target: &str) -> bool {
    container.starts_with(target)
}

fn ends_with(container: &str, target: &str) -> bool {
    container.ends_with(target)
}

fn does_contain(container: &str, target: &str) -> (bool, Option<usize>) {
    match container.find(target) {
        Some(index) => (true, Some(index)),
        None => (false, None),
    }
}

fn main() {
    println!(
        "Starts with Test ( Hello,Hell ) : {}",
        starts_with("Hello", "Hell")
    );
    println!("Ends with Test ( Code,ode ) : {}", ends_with("Code", "ode"));
    let (contains, index) = does_contain("Google", "msn");
    println!(
        "Contains Test ( Google,msn ) : {} {}",
        contains,
        index.unwrap_or(-1)
    );
}
