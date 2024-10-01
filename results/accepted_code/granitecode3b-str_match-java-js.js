function startsWith(str, substr) {
  return str.startsWith(substr);
}
function contains(str, substr) {
  return str.includes(substr);
}
function endsWith(str, substr) {
  return str.endsWith(substr);
}
function findIndex(str, substr) {
  let index = str.indexOf(substr);
  if (index === -1) {
    return -1;
  } else {
    return index;
  }
}
