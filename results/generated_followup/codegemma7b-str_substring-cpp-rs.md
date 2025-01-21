The error occurs because the `find()` method returns an `Option<usize>`, but the `[]` operator expects an `usize`. The fix is to wrap the expression in `Some()`.

```rs
println!("{}", &s[s.find(c).unwrap()..n + m]);
println!("{}", &s[s.find(&sub).unwrap()..n + m]);
```
