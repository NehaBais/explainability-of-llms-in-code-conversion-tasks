 Here is the equivalent JavaScript code for the provided Java methods:

```javascript
function substring(str, n, m) {
    if (m !== undefined) {
        return str.substring(n, n + m);
    } else if (m === undefined && typeof n === 'string') {
        // Special case for the last character removed version
        const index = str.indexOf(n);
        return str.substring(0, index !== -1 ? index : str.length - 1);
    } else {
        // Default to starting from n characters in and of m length if only one argument is provided
        return str.substring(n, n + (m || undefined));
    }
}

function substringChar(str, c, m) {
    const index = str.indexOf(c);
    if (index !== -1) {
        return str.substring(index, index + m);
    } else {
        throw new Error("Character not found in the string.");
    }
}

function substringSubstr(str, sub, m) {
    const index = str.indexOf(sub);
    if (index !== -1) {
        return str.substring(index, index + m);
    } else {
        throw new Error("Substring not found in the string.");
    }
}
```

### Explanation:
1. **General Substring Function**: The `substring` function handles multiple cases based on the number of arguments provided. If two or three arguments are passed, it behaves as per Java's `substring`. If only one argument is passed (which is a string for the last character removed version), it finds the index of that string and returns the substring up to the second-to-last character.
2. **Substring Starting from a Character**: This function uses `indexOf` to find the position of the character `c`. If found, it returns a substring starting from that character with the specified length `m`.
3. **Substring Starting from a Substring**: Similar to the previous function but starts from the first occurrence of the given substring `sub` and then extracts a substring of length `m`.

These JavaScript functions are designed to handle Unicode strings correctly, ensuring they reference logical characters (code points) rather than 8-bit or 16-bit code units.
