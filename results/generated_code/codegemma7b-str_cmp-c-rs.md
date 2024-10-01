```rust
use std::cmp::Ordering;

fn compare(a: &str, b: &str) {
    println!(
        "{:2} {:2} {:2} {:2} {:2} {:2} {:2} {}",
        a,
        a == b,
        a != b,
        a > b,
        a < b,
        a >= b,
        a <= b,
        b
    );
}

fn compare_ignore_case(a: &str, b: &str) {
    println!(
        "{:2} {:2} {:2} {:2} {:2} {:2} {:2} {}",
        a,
        a.eq_ignore_ascii_case(b),
        a.ne_ignore_ascii_case(b),
        a.gt_ignore_ascii_case(b),
        a.lt_ignore_ascii_case(b),
        a.ge_ignore_ascii_case(b),
        a.le_ignore_ascii_case(b),
        b
    );
}

fn main() {
    println!("eq , ne , gt , lt , ge , le");

    compare("ball", "bell");
    compare("ball", "ball");
    compare("ball", "ball");
    compare("ball", "ball");

    compare_ignore_case("ball", "bell");
    compare_ignore_case("ball", "ball");
    compare_ignore_case("ball", "ball");
    compare_ignore_case("ball", "ball");

    compare("YUP", "YEP");
    compare("YUP", "YEP");
    compare("YUP", "YEP");
    compare("YUP", "YEP");

    compare_ignore_case("YUP", "YEP");
    compare_ignore_case("YUP", "YEP");
    compare_ignore_case("YUP", "YEP");
    compare_ignore_case("YUP", "YEP");

    compare("ball", "BELL");
    compare_ignore_case("ball", "BELL");

    compare("ball", "BALL");
    compare_ignore_case("ball", "BALL");

    compare("YUP", "yep");
    compare_ignore_case("YUP", "yep");
}
```
