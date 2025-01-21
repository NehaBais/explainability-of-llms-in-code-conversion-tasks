const fs = require("fs");
const path = require("path");

// Define the paths to the input and output files
const inputPath = "input.txt";
const outputPath = "output.txt";

// Define the paths to the docs directory and its new name
const docDirectoryPath = "docs";
const newDocDirectoryName = "mydocs";

// Function to rename a file or directory
function renameFileOrDirectory(currentPath, newPath) {
  fs.rename(currentPath, newPath, (err) => {
    if (err) {
      console.error(`Error renaming ${currentPath}:`, err);
    } else {
      console.log(`${currentPath} renamed successfully to ${newPath}`);
    }
  });
}

// Rename the current directory
renameFileOrDirectory(inputPath, outputPath);

// Create a new directory with the new name
fs.mkdir(path.join(__dirname, newDocDirectoryName), (err) => {
  if (err) {
    console.error(`Error creating new directory ${newDocDirectoryName}:`, err);
  } else {
    console.log(`${newDocDirectoryName} created successfully`);
  }
});

// Rename the root directory
renameFileOrDirectory(__dirname, path.join(__dirname, "mydocs"));

// Rename the root directory's contents
fs.readdir(path.join(__dirname, "mydocs"), (err, files) => {
  if (err) {
    console.error(`Error listing files in mydocs:`, err);
    return;
  }

  files.forEach((file) => {
    const oldFilePath = path.join(__dirname, "mydocs", file);
    const newFilePath = path.join(
      __dirname,
      "mydocs",
      file.replace(inputPath.split("/").pop(), outputPath.split("/").pop()),
    );
    fs.rename(oldFilePath, newFilePath, (err) => {
      if (err) {
        console.error(`Error renaming ${oldFilePath}:`, err);
      } else {
        console.log(`${oldFilePath} renamed successfully to ${newFilePath}`);
      }
    });
  });
});
