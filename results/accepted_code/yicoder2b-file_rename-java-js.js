const fs = require("fs");
var renameFile = (oldname, newname) => {
  try {
    return fs.renameSync(oldname, newname); // return true if file/directory is renamed successfully
  } catch (err) {
    console.log(`Error renaming ${oldname}: ${err}`); // log error message
    return false; // else return false
  }
};
var test = (type, oldname, newname) => {
  if (renameFile(oldname, newname)) {
    console.log(`The ${type} called ${oldname} was renamed as ${newname}`);
  } else {
    console.log(`Error renaming the ${type}: ${oldname} into ${newname}`);
  }
};
const testHere = () => {
  test("file", "input.txt", "output.txt");
}; // Rename file in current directory
fs.realpath(".", function (err, path) {
  if (!err) console.log(`The current working directory is ${path}`); // Print current working directory
});
const testRoot = () => {
  test("directory", "docs", "mydocs");
}; // Rename directory in root filesystem

testHere();
testRoot();
