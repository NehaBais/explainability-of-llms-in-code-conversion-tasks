function checkReg(path) {
  // Check if the file exists
  const stat = fs.statSync(path);
  return stat.isFile();
}

function checkDir(path) {
  // Check if the directory exists
  const stat = fs.lstatSync(path);
  return stat.isDirectory();
}

console.log(
  "input.txt is a regular file?",
  checkReg("input.txt") ? "yes" : "no",
);
console.log("docs is a directory?", checkDir("docs") ? "yes" : "no");
console.log(
  "/input.txt is a regular file?",
  checkReg("/input.txt") ? "yes" : "no",
);
console.log("/docs is a directory?", checkDir("/docs") ? "yes" : "no");
