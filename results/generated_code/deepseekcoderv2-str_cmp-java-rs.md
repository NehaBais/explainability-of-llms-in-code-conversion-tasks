## Solution 1 - Rust
```rust
fn main() {
    compare("Hello", "Hello");
    compare("5", "5.0");
    compare("java", "Java");
    compare("ĴÃVÁ", "ĴÃVÁ");
    compare("ĴÃVÁ", "ĵãvá");
}
fn compare(a: &str, b: &str) {
    if a == b {
        println!("'{}' and '{}' are lexically equal.", a, b);
    } else {
        println!("'{}' and '{}' are not lexically equal.", a, b);
    }

    if a.eq_ignore_ascii_case(b) {
        println!("'{}' and '{}' are case-insensitive lexically equal.", a, b);
    } else {
        println!("'{}' and '{}' are not case-insensitive lexically equal.", a, b);
    }

    if a.cmp(b) < 0 {
        println!("'{}' is lexically before '{}'.", a, b);
    } else if a.cmp(b) > 0 {
        println!("'{}' is lexically after '{}'.", a, b);
    }

    if a.cmp(b) >= 0 {
        println!("'{}' is not lexically before '{}'.", a, b);
    } else if a.cmp(b) <= 0 {
        println!("'{}' is not lexically after '{}'.", a, b);
    }

    println!("The lexical relationship is: {}", a.cmp(b));
    println!("The case-insensitive lexical relationship is: {}", a.to_lowercase().cmp(&b.to_lowercase()));
}
```
### Output - Rust 1.74.0

'Hello' and 'Hello' are lexically equal.
'Hello' and 'Hello' are case-insensitive lexically equal.
'Hello' is not lexically before 'Hello'.
'Hello' is not lexically after 'Hello'.
The lexical relationship is: 0
The case-insensitive lexical relationship is: 0
'5' and '5.0' are not lexically equal.
'5' and '5.0' are case-insensitive lexically equal.
'5' is lexically before '5.0'.
'5' is not lexically after '5.0'.
The lexical relationship is: -1
The case-insensitive lexical relationship is: 1
'java' and 'Java' are not lexically equal.
'java' and 'Java' are case-sensitive lexically equal.
'java' is not lexically before 'Java'.
'java' is not lexically after 'Java'.
The lexical relationship is: -32
The case-insensitive lexical relationship is: 0
'ĴÃVÁ' and 'ĵãvá' are not lexically equal.
'ĴÃVÁ' and 'ĵãvá' are case-sensitive lexically equal.
'ĴÃVÁ' is not lexically before 'ĵãvá'.
'ĴÃVÁ' is not lexically after 'ĵãvá'.
The lexical relationship is: 0
The case-insensitive lexical relationship is: -32

## Solution 2 - Python (3.11)

def compare(a, b):
    if a == b:
        print("'{}' and '{}' are lexically equal.".format(a, b))
    else:
        print("'{}' and '{}' are not lexically equal.".format(a, b))

    if a.lower() == b.lower():
        print("'{}' and '{}' are case-insensitive lexically equal.".format(a, b))
    else:
        print("'{}' and '{}' are not case-insensitive lexically equal.".format(a, b))

    if a < b:
        print("'{}' is lexically before '{}'.".format(a, b))
    elif a > b:
        print("'{}' is lexically after '{}'.".format(a, b))

    if not (a < b):
        print("'{}' is not lexically before '{}'.".format(a, b))
    if not (a > b):
        print("'{}' is not lexically after '{}'.".format(a, b))

    print("The lexical relationship is: {}".format(ord(a) - ord(b)))
    print("The case-insensitive lexical relationship is: {}".format(ord(a.lower()) - ord(b.lower())))

compare("Hello", "Hello")
compare("5", "5.0")
compare("java", "Java")
compare("ĴÃVÁ", "ĵãvá")

