The error is caused by the fact that the `split` function returns an iterator over references to substrings, which are automatically dropped at the end of the statement. In order to fix this, we can create a new variable and assign it to the result of the split operation. Here's how you can do it in one line:
```rs
let nums = String::new().split(" ").collect();
```

