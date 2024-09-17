### Solution:
```rust
use std::collections::BTreeSet;
fn main() {
	let mut set = BTreeSet::new();
	let i = 53;
	for x in 1..=isqrt(i) {
		if (i % x == 0) {
			set.insert(x);
			set.insert(i / x);
		}
	}
	x += 1;
	if (x * x == i) {
		set.insert(x);
	}
	let set = set; // BTreeSet<_> -> Vec<_>
	for x in &set {
		print!("{}, ", x);
	}
}
```
