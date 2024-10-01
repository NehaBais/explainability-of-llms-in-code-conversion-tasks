use std::fs;
use std::path::Path;

fn rename_and_copy() {
    let input = "input.txt";
    let output = "output.txt";

    match fs::rename(input, output) {
        Ok(_) => println!("Renamed file from {} to {}", input, output),
        Err(err) => eprintln!("Error: {}", err),
    }

    let docs = "docs";
    let mydocs = "mydocs";

    match fs::rename(Path::new(&*docs), Path::new(&*mydocs)) {
        Ok(_) => println!("Renamed directory from {} to {}", docs, mydocs),
        Err(err) => eprintln!("Error: {}", err),
    }

    let root_input = "/input.txt";
    let root_output = "/output.txt";

    match fs::rename(&root_input, &root_output) {
        Ok(_) => println!(
            "Renamed file from {} to {} in the root",
            root_input, root_output
        ),
        Err(err) => eprintln!("Error: {}", err),
    }

    let root_docs = "/docs";
    let root_mydocs = "/mydocs";

    match fs::rename(&Path::new(&*root_docs), &Path::new(&*root_mydocs)) {
        Ok(_) => println!(
            "Renamed directory from {} to {} in the root",
            root_docs, root_mydocs
        ),
        Err(err) => eprintln!("Error: {}", err),
    }
}

fn main() {
    rename_and_copy();
}
