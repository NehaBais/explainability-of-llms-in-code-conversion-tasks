Sure! Here is the Rust code for the above-mentioned JavaScript code:

```
fn main() {
   let file_system = fs::FileSystem;
   let current_working_directory = file_system.current_directory();
   let cwd_path = path::PathBuf::from(current_working_directory);
   rename(&cwd_path, "input.txt", "output.txt");
   rename(&cwd_path, "docs", "mydocs");
   let root_path = file_system.root_directory();
   rename(&root_path, "c:/input.txt", "c:/output.txt");
   rename(&root_path, "c:/docs", "c:/mydocs");
}
fn rename(path: &str, oldname: &str, newname: &str) {
   let path = Path::new(path);
   let from_path = path.join(oldname);
   let to_path = path.join(newname);
   match fs::rename(&from_path, &to_path) {
      Ok(_) => println!("Successfully renamed {} to {}", oldname, newname),
      Err(e) => println!("Error while renaming: {}", e),
   }
}
```
