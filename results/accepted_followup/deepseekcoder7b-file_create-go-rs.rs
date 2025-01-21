let root = std::env::current_dir().unwrap();  // This line retrieves current directory path of your program
create_file(cwd.join("output.txt").as_path())?;
create_dir("docs")?;
create_dir((root.to_string() + "\\docs").as_str())?;