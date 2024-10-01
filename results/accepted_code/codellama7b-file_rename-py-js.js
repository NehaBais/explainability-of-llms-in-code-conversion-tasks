// Rename input.txt to output.txt
fs.rename("input.txt", "output.txt");

// Rename docs to mydocs
fs.rename("docs", "mydocs");

// Rename here/input.txt to here/output.txt
fs.rename(process.cwd() + "/input.txt", process.cwd() + "/output.txt");

// Rename root/docs to root/mydocs
fs.rename("/" + "docs", "/" + "mydocs");
