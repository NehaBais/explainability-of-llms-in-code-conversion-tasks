### Solution in Python
```python
def substring_in():
"""Return a substring of given string."""
# starting from n characters in and of m length.
n = 2
m = 3
print(f"Start {n}, length {m}:    {'ABCDEFGH'[n:n+m]}")
# starting from n characters in, up to the end of the string.
print(f'Start {n}, to end:      {"ABCDEFGH"[n:]}')
# whole string minus last character.
print('All but last:         ', 'ABCDEFGH'[:-1])
# starting from a known character within the string and of m length.
dx = "ABCDEFGH".find("D")  # use str.index for byte strings
print(f"Start 'D', length {m}:  {'ABCDEFGH'[dx : dx+m]}")
# starting from a known substring within the string and of m length.
sx = "ABCDEFGH".find("DE")
print('Start "DE", length %d: %s' % (m, 'ABCDEFGH'[sx : sx+m]))
```
## Part 2
Convert the following code from Golang to Python. This is the requirement for the code - Display all substrings of a string that contains only digits and are longer than one digit. Examples: 12345 => 12, 123, 234, 345; 9876543210 => 98, 87, ..., 76, ..., 10; abcd => (none); 1a2b3c4d5e => (none).

package main
import "fmt"
func substrings(s string) []string {
var subs []string
for i := range s {
// only digits and longer than one digit.
if len(s)-i < 2 {
break // skip to next character, if there are less then two characters remaining
}
// for each substring starting at index i with length >1.
for j := 2; ; j++ {
subs = append(subs, s[i:i+j])
if len(s)-i <= j { // last iteration?
break
}
}
}
return subs
}
func main() {
fmt.Println("12345 =>", substrings("12345"))
fmt.Println("9876543210 =>", substrings("9876543210"))
fmt.Println("abcd =>", substrings("abcd"))
fmt.Println("1a2b3c4d5e =>", substrings("1a2b3c4d5e"))
}

### Solution in Python
python
def substrings(s: str) -> list[str]:
"""Return all substrings of given string that contains only digits and are longer than one digit."""
subs = []
for i in range(len(s)):  # skip to next character, if there are less then two characters remaining.
if len(s)-i < 2:
break
# for each substring starting at index i with length >1.
for j in range(2, len(s) - i + 1):
subs.append(s[i : i+j])
return subs
print("12345 =>", substrings("12345"))
print("9876543210 =>", substrings("9876543210"))
print("abcd =>", substrings("abcd"))
print("1a2b3c4d5e =>", substrings("1a2b3c4d5e"))

## Part 3
Convert the following code from Golang to Python. This is the requirement for the code - Given a string, convert it to "fizz buzz" if: it contains both the letter 'f' and the letter 'z', or; it starts with the letter 'f' (lower case or upper case). Otherwise print the input string unmodified.

package main
import (
    "fmt"
    "strings"
)
func fizzbuzz(s string) string {
if strings.ContainsAny(s, "FZ") || strings.HasPrefix(s, "f") {
return "fizz buzz"
}
return s
}
func main() {
fmt.Println("f =>", fizzbuzz("f"))
fmt.Println("f234 =>", fizzbuzz("f234"))
fmt.Println("ffzz =>", fizzbuzz("ffzz"))
fmt.Println("FZf =>", fizzbuzz("FZf"))
}

### Solution in Python
python
def fizz_buzz(s: str) -> str:
"""Return the input string if it doesn't contain both 'f' and 'z'. Return "fizz buzz" otherwise."""
if ('f' in s.lower() or 'z' in s.lower()) and ('F' not in s or 'Z' not in s):
return "fizz buzz"
return s
print("f =>", fizz_buzz("f"))
print("f234 =>", fizz_buzz("f234"))
print("ffzz =>", fizz_buzz("ffzz"))
print("FZf =>", fizz_buzz("FZf"))

