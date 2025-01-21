const fs = require("fs");
const path = require("path");

function renameFile(oldname, newname) {
  try {
    fs.renameSync(oldname, newname);
    return true;
  } catch (error) {
    console.error(`Error renaming ${oldname} to ${newname}:`, error);
    return false;
  }
}

function test(type, oldname, newname) {
  const originalOldName = oldname;
  const originalNewName = newname;

  if (fs.existsSync(oldname)) {
    const result = renameFile(oldname, newname);
    console.log(
      `The following ${type} called ${originalOldName} ${result ? "was" : "could not"} be renamed into ${originalNewName}.`,
    );
  } else {
    console.log(`${originalOldName} does not exist.`);
  }

  // Test in the root directory as well
  oldname = path.join("/", oldname);
  newname = path.join("/", newname);

  if (fs.existsSync(oldname)) {
    const result = renameFile(oldname, newname);
    console.log(
      `The following ${type} called ${originalOldName} ${result ? "was" : "could not"} be renamed into ${originalNewName}.`,
    );
  } else {
    console.log(`${originalOldName} does not exist.`);
  }
}

test("file", "input.txt", "output.txt");
test("file", path.join("/", "input.txt"), path.join("/", "output.txt"));
test("directory", "docs", "mydocs");
test("directory", path.join("/", "docs", "/"), path.join("/", "mydocs", "/"));
