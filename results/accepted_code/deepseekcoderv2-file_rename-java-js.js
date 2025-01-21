const fs = require("fs");
const path = require("path");

function renameFile(oldname, newname) {
  try {
    fs.renameSync(oldname, newname);
    return true;
  } catch (err) {
    console.error(`Error renaming file from ${oldname} to ${newname}:`, err);
    return false;
  }
}

function test(type, oldname, newname) {
  const success = renameFile(oldname, newname);
  console.log(
    `The following ${type} called ${oldname} was renamed as ${newname}:`,
    success ? "Success" : "Failed",
  );
}

// Test in current working directory
test("file", "input.txt", "output.txt");
test(
  "file",
  path.join(__dirname, "input.txt"),
  path.join(__dirname, "output.txt"),
);

// Test in filesystem root
test("directory", "docs", "mydocs");
const docsDir = path.join(__dirname, "docs");
fs.mkdirSync(docsDir); // Ensure the directory exists
test("directory", path.join(docsDir, ""), path.join(docsDir, ""));
