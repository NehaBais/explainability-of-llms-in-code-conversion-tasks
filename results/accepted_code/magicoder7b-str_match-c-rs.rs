fn starts_with(container: &str, target: &str) -> bool {
    if container.len() < target.len() {
        false
    } else {
        container.starts_with(target)
    }
}

fn ends_with(container: &str, target: &str) -> bool {
    if container.len() < target.len() {
        false
    } else {
        container.ends_with(target)
    }
}

fn does_contain(container: &str, target: &str) -> bool {
    container.contains(target)
}

fn main() {
    println!(
        "Starts with Test ( Hello,Hell ) : {}",
        starts_with("Hello", "Hell")
    );
    println!("Ends with Test ( Code,ode ) : {}", ends_with("Code", "ode"));
    println!(
        "Contains Test ( Google,msn ) : {}",
        does_contain("Google", "msn")
    );
}
