In Rust, you can use the `std::fs` module to handle file system operations. The equivalent code of your C++ program would be as follows:

```rust
use std::{ fs, error::Error };

fn main(args: Vec<String>) -> Result<(), Box<dyn Error>> {
    if args.len() != 2 {
        println!("usage: mkdir <path>");
        return Err("Invalid arguments count".into());
    }

    let path_to_create = &args[1];

    if fs::metadata(path_to_create)?.is_dir() {
        Ok(())
    } else {
        fs::create_dir_all(path_to_create)?;
        Ok(())
    }
}
``` 
In this Rust code:
- The `args` variable is a list of command line arguments. 
- We check if the argument count equals to 2, then get the path from the second element in args (the first one being the program name itself).
- fs::metadata returns information about file metadata if it exists or an error otherwise. `?` operator is used here to return any error immediately and continue if everything is fine. The `is_dir()` method checks whether a path is pointing at a directory. 
- If it's not a dir, we use the `fs::create_dir_all()` function to create all directories in the given path.
- Then we return an Ok() variant of Result if no error occurred so far and we've exited the function gracefully.

This code does essentially the same thing as your C++ program but is more idiomatic in Rust with respect to how errors are handled. 

Remember to add `std::fs` module and `Box<dyn Error>` trait bounds to your imports for this code to work, or just adjust the error handling mechanism according to your specific use case.
