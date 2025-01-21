function substr_index(s, searchString) {
  var pos = s.indexOf(searchString);

  if (pos === -1) return 0; // if no match is found

  return pos + 1; // return position of match plus one for JavaScript's zero-based index
}
