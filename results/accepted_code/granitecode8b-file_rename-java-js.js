const fs = require("fs");
const path = require("path");
function renameFile(oldname, newname) {
  try {
    fs.renameSync(oldname, newname);
    return true;
  } catch (err) {
    console.error(`Error renaming ${oldname} to ${newname}: ${err}`);
    return false;
  }
}
function test(type, oldname, newname) {
  const success = renameFile(oldname, newname);
  const message = `The following ${type} called ${oldname} ${success ? "was renamed as" : "could not be renamed into"} ${newname}.`;
  console.log(message);
}
const rootDir = "/"; // Change this to the root directory if needed
test(
  "file",
  path.join(__dirname, "input.txt"),
  path.join(__dirname, "output.txt"),
);
test("file", path.join(rootDir, "input.txt"), path.join(rootDir, "output.txt"));
test("directory", path.join(__dirname, "docs"), path.join(__dirname, "mydocs"));
test("directory", path.join(rootDir, "docs"), path.join(rootDir, "mydocs"));
