In JavaScript, you can use template literals or `string.replace` to replace placeholders in strings with their actual values. Here is how the provided Java code can be converted into JavaScript:

With Template Literals:
```javascript
let adjective = "little";
let lyric = `Mary had a ${adjective} lamb`;
console.log(lyric); // Outputs: Mary had a little lamb
```

Alternatively, with `string.replace()`:

let adjective = "little";
let lyric = "Mary had a %s lamb".replace("%s", adjective);
console.log(lyric); // Outputs: Mary had a little lamb


