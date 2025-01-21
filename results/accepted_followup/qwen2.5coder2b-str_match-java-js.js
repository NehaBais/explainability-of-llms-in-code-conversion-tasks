function startsWith(str, substr) {
  return str.startsWith(substr);
}

function endsWith(str, substr) {
  return str.endsWith(substr);
}

function contains(str, substr) {
  return str.includes(substr);
}

let loc = "abab".indexOf("bb");
console.log(loc); //returns -1
loc = "abab".indexOf("bb");
console.log(loc); //returns 0
loc = "abab".indexOf("ab", loc + 1); //returns 2
