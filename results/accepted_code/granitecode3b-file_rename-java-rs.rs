use std::fs;
fn main() {
    let path1 = "./input.txt";
    let path2 = "./output.txt";
    fs::rename(path1, path2).unwrap();

    let path3 = "/input.txt";
    let path4 = "/output.txt";
    fs::rename(path3, path4).unwrap();

    let path5 = "docs";
    let path6 = "mydocs";
    fs::rename(path5, path6).unwrap();

    let path7 = "/docs";
    let path8 = "/mydocs";
    fs::rename(path7, path8).unwrap();
}
