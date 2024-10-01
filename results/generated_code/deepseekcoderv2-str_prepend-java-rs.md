```rust
let mut string = String::from("def");
// 字符串连接
string.insert_str(0, "abc");
// 输出结果：abcde
println!("{}", string);
```
