 Here's the equivalent JavaScript code for the provided Go code:

```javascript
function match(first, second) {
    console.log(`1. ${first} starts with ${second}: ${first.startsWith(second)}`);
    
    const index = first.indexOf(second);
    console.log(`2. ${first} contains ${second}: ${index !== -1}`);
    
    if (index !== -1) {
        console.log(`2.1. at location ${index}`);
        let start = index + 1;
        while (true) {
            const nextIndex = first.indexOf(second, start);
            if (nextIndex === -1) break;
            console.log(`2.2. at location ${nextIndex}`);
            start = nextIndex + 1;
        }
        console.log("2.2. and that's all");
    }
    
    console.log(`3. ${first} ends with ${second}: ${first.endsWith(second)}`);
}

function main() {
    match("abracadabra", "abr");
}

main();
```

This JavaScript code performs the same string matching operations as the Go code:
1. Determines if the first string starts with the second string.
2. Determines if the first string contains the second string at any location, and prints the locations of all occurrences.
3. Determines if the first string ends with the second string.

The JavaScript `String` prototype methods `startsWith`, `indexOf`, and `endsWith` are used to achieve the same functionality as Go's `strings.HasPrefix`, `strings.Index`, and `strings.HasSuffix`.
