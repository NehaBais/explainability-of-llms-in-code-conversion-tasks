fn starts_with(container: &str, target: &str) -> bool {
    let clen = container.len();
    let tlen = target.len();

    if clen < tlen {
        false
    } else {
        &container[0..tlen] == target
    }
}

fn ends_with(container: &str, target: &str) -> bool {
    let clen = container.len();
    let tlen = target.len();

    if clen < tlen {
        false
    } else {
        &container[clen - tlen..] == &target[0..]
    }
}

fn contains(container: &str, target: &str) -> bool {
    let _ = container.find(target);
}

fn main() {
    println!(
        "Starts with Test ( Hello,Hell ) : {:?}",
        starts_with("Hello", "Hell")
    );
    println!(
        "Ends with Test ( Code,ode ) : {:?}",
        ends_with("Code", "ode")
    );
    println!(
        "Contains Test ( Google,msn ) : {:?}",
        contains("Google", "msn")
    );
}
