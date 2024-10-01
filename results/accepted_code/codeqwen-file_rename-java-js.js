const fs = require("fs");

function renameFile(oldName, newName) {
  // Rename file (or directory)
  try {
    fs.renameSync(oldName, newName);
    return true;
  } catch (err) {
    console.log(`Error renaming ${oldName}: ${err}`);
    return false;
  }
}

function test(type, oldName, newName) {
  console.log(
    `The following ${type} called ${oldName} ${renameFile(oldName, newName) ? "was renamed as" : "could not be renamed into"} ${newName}.`,
  );
}

test("file", "./input.txt", "./output.txt");
test("file", `${__dirname}/input.txt`, `${__dirname}/output.txt`);
test("directory", "./docs", "./mydocs");
test("directory", `${__dirname}/docs/`, `${__dirname}/mydocs/`);
