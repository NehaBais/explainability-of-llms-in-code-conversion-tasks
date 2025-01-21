The error occurs because `format!` macro expects its first argument to be a string literal, but it seems that `str` variable in this context is not a string literal. 

The fix is to wrap `str` with double quotes which makes it into a string literal and also fixes the error by allowing interpolation of `txt` into the resulting string. 
```rs
let out = format!("{} {}", str, txt);
```

