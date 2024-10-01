const fs = require("fs");
let path = "./"; // use current directory if no specific path provided

// Get list of files in the given path.
function getFileList(path) {
  let fileList = [];

  try {
    const files = fs.readdirSync(path); // Read files in the specified path.

    for (let i = 0; i < files.length; i++) {
      if (fs.statSync(path + "/" + files[i]).isDirectory()) {
        fileList = [...fileList, ...getFileList(path + "/" + files[i])]; // If it's a directory, recursively call this function and add to the list of all returned files.
      } else {
        if (files[i].includes(".js")) {
          console.log("The following file exists in this folder: " + files[i]);
        }
      }
    }
  } catch (err) {
    console.log("Error getting the list of files.", err);
  } // If any error is encountered, log the error message to the console and return empty list.

  return fileList;
}

// Get a list of all .js files in the current directory and its subfolders
const jsFiles = getFileList(path);
