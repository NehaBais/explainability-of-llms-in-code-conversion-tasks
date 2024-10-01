The equivalent code in Rust would be:

```rust
use std::fs::File;
use std::io::{self, Pipe};
use std::process;

fn main() {
    let file_a = File::open("file.txt").expect(&format!("Couldn't open '{}'", "file.txt"));
    let mut pipe: Pipe = Process::new(&["wc", "-c"]) // wc is the word count command for Unix/Linux systems
        .spawn()
        .expect("Couldn't spawn 'wc' process");

    pipe.stdin.write_all(&file_a)
        .expect(&format!("Couldn't write to '{}' pipe", "file.txt"), io::Error::from(io::Errno::ENOSPC))
        .unwrap();

    let mut output = String::new();
    pipe.stdout.collect()
        .expect(&format!("Couldn't collect '{}' pipe", "file.txt"), io::Error::from(io::Errno::ENOSPC))
        .unwrap();

    let _ = pipe.wait_for_input()
        .expect("Couldn't wait for input from 'wc' process");

    println!("{}", output.trim());

    // Check the size of "/file.txt" in root file system
    let mut file_b = File::open("/file.txt").expect(&format!("Couldn't open '{}'", "/file.txt"));
    pipe.spawn()
        .and_then(|process| { process.stdin })
        .and_then(|mut stdin| {
            stdin.write_all(&file_b)
                .expect("Couldn't write to pipe", io::Error::from(io::Errno::ENOSPC))
                .unwrap();
            return Ok((pipe.stdout).collect());
        }).and_then(|result| { match result {
            Ok(output) => println!("{}", output.trim()),
            Err(_) => println!("Couldn't collect pipe"),
        }});
}
```

This code will first attempt to find the file `file.txt` in the current directory and print its size (in bytes). It will then attempt to open the root filesystem file `/file.txt` and print its size as well. 

Keep in mind that this is a very rudimentary approach to solving your problem, it's not suitable for large files because it opens the entire file in memory before counting, it doesn't handle errors properly or wait for process output, it uses `wc -c` command which may not be available on all systems. The actual solution would depend heavily on how you structure your code and other environment specifics (like which operating system).
