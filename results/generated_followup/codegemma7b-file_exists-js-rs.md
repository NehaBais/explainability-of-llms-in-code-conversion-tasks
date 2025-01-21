The error occurs because `let` is used to declare local variables, while global variables are required in this case. The fix is to change `let` to `const` or `static`.

```rs
const current_dir = std::env::current_dir().unwrap();
const input_file = current_dir.join("input.txt");
const docs_dir = current_dir.join("docs");
```
