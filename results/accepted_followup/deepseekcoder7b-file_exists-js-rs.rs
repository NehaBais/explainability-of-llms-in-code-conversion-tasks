let current_dir = std::env::current_dir().expect("Failed to get current directory");
file_checker(&current_dir.join(".//input.txt"));  // Use join to append paths in the case that they are relative and might not start with `./`.
dir_checker(&current_dir.join("docs"));  // Same here for directory path.