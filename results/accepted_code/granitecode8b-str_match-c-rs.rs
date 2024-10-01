use std::ffi::CStr;
fn main() {
    let container = "Hello";
    let target1 = "Hell";
    let target2 = "ode";
    let target3 = "msn";
    println!(
        "Starts with Test ( Hello,Hell ) : {}",
        container.starts_with(target1)
    );
    println!(
        "Ends with Test ( Code,ode ) : {}",
        container.ends_with(target2)
    );
    println!(
        "Contains Test ( Google,msn ) : {}",
        container.contains(target3)
    );
}
