use std::fs::File;
use std::io::{self, Pipe};
use std::process;

fn main() {
    let file_a = File::open("file.txt").expect(&format!("Couldn't open '{}'", "file.txt"));
    let mut pipe: Pipe = Process::new(&["wc", "-c"]) // wc is the word count command for Unix/Linux systems
        .spawn()
        .expect("Couldn't spawn 'wc' process");

    pipe.stdin
        .write_all(&file_a)
        .expect(
            &format!("Couldn't write to '{}' pipe", "file.txt"),
            io::Error::from(io::Errno::ENOSPC),
        )
        .unwrap();

    let mut output = String::new();
    pipe.stdout
        .collect()
        .expect(
            &format!("Couldn't collect '{}' pipe", "file.txt"),
            io::Error::from(io::Errno::ENOSPC),
        )
        .unwrap();

    let _ = pipe
        .wait_for_input()
        .expect("Couldn't wait for input from 'wc' process");

    println!("{}", output.trim());

    // Check the size of "/file.txt" in root file system
    let mut file_b = File::open("/file.txt").expect(&format!("Couldn't open '{}'", "/file.txt"));
    pipe.spawn()
        .and_then(|process| process.stdin)
        .and_then(|mut stdin| {
            stdin
                .write_all(&file_b)
                .expect("Couldn't write to pipe", io::Error::from(io::Errno::ENOSPC))
                .unwrap();
            return Ok((pipe.stdout).collect());
        })
        .and_then(|result| match result {
            Ok(output) => println!("{}", output.trim()),
            Err(_) => println!("Couldn't collect pipe"),
        });
}
