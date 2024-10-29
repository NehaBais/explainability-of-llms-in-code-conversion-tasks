The Rust equivalent of the above C++ code would look something like this, using the `std::fs` module in combination with unwraps and match statements for error handling. Note that it uses an unstable feature (which is not recommended to use in production-ready software) so it will compile but won't work as expected on stable Rust:

```rust
use std::env;
use std::fs;
use std::process;

fn main() {
    let args: Vec<String> = env::args().collect();
    
    if args.len() != 2 {
        eprintln!("usage: mkdir <path>");
        process::exit(1);
    }

    let path_to_create = &args[1];
    
    match fs::metadata(path_to_create) {
        Ok(info) => {
            if info.is_dir() {
                println!("Directory already exists: {}", path_to_create);
            } else {
                eprintln!("Path exists but is not a directory: {}", path_to_create);
                process::exit(1);
           <｜begin▁of▁sentence｜>}
        }
        Err(_info) => {
            match fs::create_dir(&args[1]) {
                Ok(_info) => println!("Directory created at: {}", path_to_create),
                Err(error) => eprintln!("Could not create directory: {}. Reason: {}", path_to_create, error),
            }
        }
    };
}
``` 
In the Rust version of this program, we're using `std::env::args()` to get command-line arguments. The code then checks if there are exactly two arguments (the executable itself and one path argument). If not, it outputs a usage message and exits with an error status.

If the path is already found in the filesystem metadata, it checks if it's a directory; if so, it confirms that to the user and continues. If the path exists but is not a directory, it prints an error message and exit with failure.

Finally, if the path does not exist, we try creating it using `fs::create_dir()`. This function returns either an Ok variant containing the metadata of the created file or Err in case of errors. The result of this operation is then handled by pattern matching: successful creation results in a message confirming that the directory has been successfully created and the failure to create sends an error message back to stderr with further details.

