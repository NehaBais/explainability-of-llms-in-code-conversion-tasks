var fs = require("fs");

function create(directory) {
  try {
    fs.writeFileSync(directory + "/output.txt", ""); //Creating empty .txt file
    fs.mkdirSync(directory + "/docs"); // Creating a directory
  } catch (err) {
    console.error(err);
  }
}
create("."); // current directory
create("/"); // root directory
