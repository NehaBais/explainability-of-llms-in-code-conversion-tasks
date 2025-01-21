// Create the file
function createFile(fn) {
  try {
    var fs = require("fs");
    fs.writeFileSync(fn, "");
    console.log(`file ${fn} created!`);
  } catch (err) {
    console.error(err);
  }
}

// Create the directory
function createDir(dn) {
  try {
    var fs = require("fs");
    if (!fs.existsSync(dn)) {
      fs.mkdirSync(dn, { recursive: true });
      console.log(`directory ${dn} created!`);
    } else {
      console.log(`directory ${dn} already exists.`);
    }
  } catch (err) {
    console.error(err);
  }
}

// Call the functions
createFile("output.txt");
createFile("/input.txt");
createDir("docs");
createDir("/docs");
