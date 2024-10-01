use std::fs;
use std::io;
use std::path::PathBuf;

fn main() {
    let mut file_sizes = vec![0, 0]; // sizes for input.txt and /input.txt

    for (i, &filename) in [
        ("input.txt", "input:\\?.txt"),
        ("/input.txt", "/input:\\?.txt"),
    ]
    .iter()
    {
        let mut file =
            fs::File::new(&PathBuf::from(filename)).expect(&format!("Couldn't open {}", filename));
        file.read_to_endless(&mut file_sizes[i])
            .expect(&format!("Error reading {}", filename)); // read into `file_sizes[i]`, expect a success
        println!("Size of {} is {:?} bytes.", filename, &*file_sizes[i]); // print the size
    }
}
