let s1 = "abcd";
let s2 = "abab";
let s3 = "ab";

function startsWith(str, searchString) {
  return str.indexOf(searchString) === 0;
}

function contains(str, searchString) {
  return str.includes(searchString);
}

function endsWith(str, searchString) {
  let pos = str.lastIndexOf(searchString));
  return (pos !== -1) && (pos === str.length()-searchString.length());
}


console.log("Starts with: " + startsWith(s1, s3)));
console.log("Contains: " + contains(s1, s2))));
console.log("Ends with: " + endsWith(s1, s3))));