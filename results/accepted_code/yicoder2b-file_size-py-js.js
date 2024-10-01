const os = require("os");

const size1 = os.stat("input.txt").size;
const size2 = os.stat("/input.txt").size;
