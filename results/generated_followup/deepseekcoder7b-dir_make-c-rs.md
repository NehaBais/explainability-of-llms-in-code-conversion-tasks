The error message indicates that there are some issues with importing or using statements, mismatched types, and failed to resolve undeclared crates/modules. Here is how we can fix it:

Error Explanation: 
1) The 'use' statement for std::process does not exist in the standard library of Rust. It should be imported from `std` as shown below.
2) Incorrect type use in line 30, PathBuf is expected instead of Path. Conversion method can be used to convert a Path into a PathBuf.

Fix:
1) Add "use std::process;" at the top of your code.
2) Corrected line 30 by converting parent path to PathBuf using to_path_buf() function as shown below.

Corrected Rust Code Block:
```rs
use std::env;
use std::fs;
use std::process;
use std::path::PathBuf;

fn main() {
    let args: Vec<String> = env::args().collect();
    
    if args.len() != 2 {
        eprintln!("usage: {} <path>", args[0]);
        process::exit(1);
    }
    
    let path_str = &args[1];
    let _ = mkdir_parents(PathBuf::from(path_str));
}

fn mkdir_parents(start: PathBuf) -> Result<(), Box<dyn std::error::Error>> {
    let mut path = start;
    
    while let Some(parent) = path.parent() {
        match fs::create_dir(&parent) {
            Ok(_) => return Ok(()), 
            Err(e) if e.raw_os_error().unwrap() == 17 {} else {
                return Err(Box::new(e)); 
             }
         };
        path = (*parent).to_path_buf();
    }
    
    Ok(())}
```

