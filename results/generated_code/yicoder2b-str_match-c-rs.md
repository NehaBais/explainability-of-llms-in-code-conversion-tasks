Sure, here is the equivalent code in Rust.

Firstly note that there are no include directives as Rust doesn't typically need them for string handling operations:

```rust
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
    println!("Starts with Test ( Hello,Hell ) : {:?}", starts_with("Hello", "Hell"));
    println!("Ends with Test ( Code,ode ) : {:?}", ends_with("Code", "ode"));
    println!("Contains Test ( Google,msn ) : {:?}", contains("Google", "msn"));
}
```
Here we are using `str.find()` function in Rust which will return a `Option<usize>`, `None` if no match is found. We then check for this to be `Some(_)` to ensure that there was a valid match. If it is not `Some(_)`, we can safely assume the string does not contain the target string. The output of this program will be in the same format as C's printf.
