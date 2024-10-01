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

fn starts_with(container: &str, target: &str) -> bool {
    let clen = container.len();
    let tlen = target.len();

    if clen < tlen {
        return false;
    }

    for i in 0..tlen {
        if container.as_bytes()[i] != target.as_bytes()[i] {
            return false;
        }
    }

    true
}

fn ends_with(container: &str, target: &str) -> bool {
    let clen = container.len();
    let tlen = target.len();

    if clen < tlen {
        return false;
    }

    for i in 0..tlen {
        if container.as_bytes()[clen - i - 1] != target.as_bytes()[tlen - i - 1] {
            return false;
        }
    }

    true
}

fn does_contain(container: &str, target: &str) -> bool {
    let index = container.find(target);
    if let Some(_) = index {
        return true;
    } else {
        false
    }
}
