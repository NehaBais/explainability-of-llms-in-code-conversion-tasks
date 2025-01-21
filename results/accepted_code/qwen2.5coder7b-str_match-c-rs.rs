fn starts_with(container: &str, target: &str) -> bool {
    container.starts_with(target)
}

fn ends_with(container: &str, target: &str) -> bool {
    container.ends_with(target)
}

fn does_contain(container: &str, target: &str) -> (bool, Option<usize>) {
    let index = container.find(target);
    (index.is_some(), index)
}

fn main() {
    println!("Starts with Test ( Hello,Hell ) : {}", starts_with("Hello", "Hell"));
    println!("Ends with Test ( Code,ode ) : {}", ends_with("Code", "ode"));
    let result = does_contain("Google", "msn");
    println!("Contains Test ( Google,msn ) : {:?}", result);
    if let Some(i) = result.1 {
        println!("Location of match is: {}", i);
    }
}