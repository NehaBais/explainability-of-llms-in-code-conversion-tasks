use std::io;
use std::fs;
use std::os::unix::fs::MetadataExt;

fn get_file_sizes() {
    let mut paths = vec!["input.txt"], vec!["/input.txt"]];

    for i in 0..paths.len() { 
        match fs::metadata(paths[i].first()) {
            Ok(meta) => println!("{}' size is {} bytes.", paths[i].first(), meta.size()),
            Err(_) => println!("Could not get the metadata of '{}'.";, paths[i].first()),
        }
    }
 }