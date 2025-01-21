```rust
fn main() {
    let strings = [
        ("ball", "bell"),
        ("ball", "BALL"),
        ("YUP", "YEP"),
        ("ball", "BELL"),
        ("YUP", "yep"),
    ];

    for (a, b) in strings {
        println!("{} {} {} {} {} {}", a, ne(a, b), eq(a, b), gt(a, b), lt(a, b), ge(a, b));
        println!("{} {} {} {} {} {} ignoring case\n", a, nei(a, b), eqi(a, b), gti(a, b), lti(a, b), gei(a, b));
    }
}

fn eq(s1: &str, s2: &str) -> bool {
    s1 == s2
}

fn ne(s1: &str, s2: &str) -> bool {
    !s1.eq(s2)
}

fn gt(s1: &str, s2: &str) -> bool {
    s1 > s2
}

fn lt(s1: &str, s2: &str) -> bool {
    s1 < s2
}

fn ge(s1: &str, s2: &str) -> bool {
    s1 >= s2
}

fn eqi(s1: &str, s2: &str) -> bool {
    s1.eq_ignore_ascii_case(s2)
}

fn nei(s1: &str, s2: &str) -> bool {
    !s1.eq_ignore_ascii_case(s2)
}

fn gti(s1: &str, s2: &str) -> bool {
    s1.gt_ignore_ascii_case(s2)
}

fn lti(s1: &str, s2: &str) -> bool {
    s1.lt_ignore_ascii_case(s2)
}

fn gei(s1: &str, s2: &str) -> bool {
    s1.ge_ignore_ascii_case(s2)
}
```
