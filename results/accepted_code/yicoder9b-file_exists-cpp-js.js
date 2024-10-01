const fs = require("fs");

function fileExists(path) {
  console.log(path);
  if (fs.existsSync(path)) {
    // check if path exists
    try {
      let stats = fs.statSync(path); // get the status of the path
      if (stats.isDirectory()) {
        // check if it's a directory
        console.log(" is a directory");
      } else {
        // or a file
        console.log(" exists with a file size of " + stats["size"] + " bytes.");
      }
    } catch (e) {
      console.error(e); // error handling
    }
  } else {
    console.log(" does not exist"); // if path doesn't exist log it out
  }
}

fileExists("input.txt"); // current working directory
fileExists("/zero_length.txt"); // file in root filesystem

let dir = "docs";
fs.readdir(dir, (err, files) => {
  // read directory
  if (err) throw err; // error handling if any

  files.forEach((file) => {
    // for each file inside the directory
    fileExists(`${dir}/${file}`); // check it's existence and type
  });
});
