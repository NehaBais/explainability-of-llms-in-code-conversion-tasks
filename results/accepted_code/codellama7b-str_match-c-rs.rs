use std::ffi::CStr;
use std::os::raw::c_char;

fn starts_with(container: &str, target: &str) -> bool {
    container.starts_with(target)
}

fn ends_with(container: &str, target: &str) -> bool {
    container.ends_with(target)
}

fn contains(container: &str, target: &str) -> bool {
    container.contains(target)
}

fn main() {
    let container = "Hello";
    let target = "Hell";
    println!(
        "Starts with Test ( {} , {} ) : {:?}",
        container,
        target,
        starts_with(container, target)
    );

    let container = "Code";
    let target = "ode";
    println!(
        "Ends with Test ( {} , {} ) : {:?}",
        container,
        target,
        ends_with(container, target)
    );

    let container = "Google";
    let target = "msn";
    println!(
        "Contains Test ( {} , {} ) : {:?}",
        container,
        target,
        contains(container, target)
    );
}
