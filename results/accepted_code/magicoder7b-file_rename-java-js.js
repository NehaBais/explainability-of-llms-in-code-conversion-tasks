const fs = require("fs");
const path = require("path");

function renameFile(oldname, newname) {
  // File (or directory) with old name
  const file = fs.statSync(oldname);

  if (!file.isFile() && !file.isDirectory()) {
    console.log(`The ${oldname} does not exist.`);
    return false;
  }

  // File (or directory) with new name
  const file2 = fs.statSync(newname);

  if (file2 && !file2.isDirectory()) {
    console.log(`A file or directory named ${newname} already exists.`);
    return false;
  }

  try {
    // Rename file (or directory)
    fs.renameSync(oldname, newname);
    return true;
  } catch (err) {
    console.error(`Unable to rename ${oldname} into ${newname}.`, err);
    return false;
  }
}

function test(type, oldname, newname) {
  console.log(
    `The following ${type} called ${oldname}` +
      (renameFile(oldname, newname)
        ? ` was renamed as `
        : ` could not be renamed into`) +
      `${newname}.`,
  );
}

test("file", "input.txt", "output.txt");
test(
  "file",
  path.resolve(__dirname, "input.txt"),
  path.resolve(__dirname, "output.txt"),
);
test("directory", "docs", "mydocs");
test(
  "directory",
  path.resolve(__dirname, "docs"),
  path.resolve(__dirname, "mydocs"),
);
