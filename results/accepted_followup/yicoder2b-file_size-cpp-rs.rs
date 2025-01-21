use std::fs;
use std::path::PathBuf;

fn main() {
    let mut file_sizes = vec![0, 0]; // sizes for input.txt and /input.txt

    for (i, &filename) in [("input.txt", "input:\\?.txt"), ("/input.txt", "/input:\\?.txt")].iter() {
        let mut file = PathBuf::from(filename).expect(&format!("Couldn't open {}", filename));
        file.push(PathBuf::new()); // to ensure it is a directory

        let size = fs::File::new(&file).expect(&format!("Couldn't open {}", filename))
            .read_to_endless(&mut file_sizes[i]).unwrap();

        println!("Size of {} is {} bytes.", &filename, size);
    }
}