import std::io::File;

fn main() {
    let file = File::exists("docs/input.txt"); // Checking for current working directory 
    let file = File::exists("/docs/input.txt");  // Same but for root directory
}