[PYTHON]
def starts_with(str1, str2):
    return str1.startswith(str2)

def contains(str1, str2):
    return str2 in str1

def ends_with(str1, str2):
    return str1.endswith(str2)
[/PYTHON]
[RUST]
```rust
fn starts_with(str1: &str, str2: &str) -> bool {
    str1.starts_with(str2)
}

fn contains(str1: &str, str2: &str) -> bool {
    str1.contains(str2)
}

fn ends_with(str1: &str, str2: &str) -> bool {
    str1.ends_with(str2)
}
```
[/RUST]
[TESTS]
# Test case 1: startsWith
assert starts_with("abcd", "ab") == true
# Test case 2: endsWith
assert ends_with("abcd", "zn") == false
# Test case 3: contains
assert contains("abab", "bb") == false
assert contains("abab", "ab") == true
# Test case 4: indexOf
let loc = "abab".indexOf("bb");
assert loc == -1
loc = "abab".indexOf("ab");
assert loc == 0
loc = "abab".indexOf("ab", loc + 1);
assert loc == 2
[/TESTS]

