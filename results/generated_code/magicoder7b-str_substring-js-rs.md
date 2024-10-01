 In Rust, you can use the `std::str` module which provides methods for working with strings. For example, to get a substring starting from n characters in and of m length:

```rust
let str = "abcdefgh";

let start_index = 2;
let slice_length = 5; //or simply use '..' to get to the end of the string

let result0 = &str[start_index..start_index+slice_length]; // => "cdefg"
println!("{:?}", result0);

let result1 = &str[start_index..]; // => "cdefgh"
println!("{:?}", result1);

let result2 = &str[0..str.len() - 1]; // => "abcdefg"
println!("{:?}", result2);

// Starting from a known character within the string and of m length
let start_index = str.find('b').unwrap();
let slice_length = 3;

let result3 = &str[start_index..start_index+slice_length]; // => "bcd"
println!("{:?}", result3);
```

Please note that the `find` function returns an Option type, which means it will return None if 'b' is not present in the string. You can use the unwrap method to get the index of 'b'. The code above assumes that 'b' exists in the string. If it might not always be there you should handle this case as well.
