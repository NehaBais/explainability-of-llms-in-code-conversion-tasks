 Here's the equivalent Java code for the given JavaScript code, which performs the three types of string matching as described:

```java
public class StringMatchingDemo {
    public static void main(String[] args) {
        String stringA = "tacoloco";
        String stringB = "co";
        boolean q1, q2, q3;
        int q2Index = -1;
        java.util.ArrayList<Integer> q2matches = new java.util.ArrayList<>();

        // stringA starts with stringB
        if (stringA.substring(0, stringB.length()).equals(stringB)) {
            q1 = true;
        } else {
            q1 = false;
        }

        // stringA contains stringB
        q2Index = stringA.indexOf(stringB);
        if (q2Index != -1) {
            q2 = true;
        } else {
            q2 = false;
        }

        // multiple matches
        java.util.regex.Pattern pattern = java.util.regex.Pattern.compile(stringB, java.util.regex.Pattern.CASE_INSENSITIVE);
        java.util.regex.Matcher matcher = pattern.matcher(stringA);
        while (matcher.find()) {
            q2matches.add(matcher.start());
        }

        // stringA ends with stringB
        if (stringA.substring(stringA.length() - stringB.length()).equals(stringB)) {
            q3 = true;
        } else {
            q3 = false;
        }

        System.out.println("1: Does '" + stringA + "' start with '" + stringB + "'? " + (q1 ? "Yes." : "No."));
        if (q2) {
            System.out.println("2: Is '" + stringB + "' contained in '" + stringA + "'? Yes, at index " + q2Index + ".");
            if (!q2matches.isEmpty() && q2matches.size() > 1) {
                System.out.print("   In fact, it happens " + q2matches.size() + " times within '" + stringA + "', at index" + (q2matches.size() > 1 ? "es" : "") + " " + String.join(", ", java.util.stream.Collectors.toList(java.util.stream.StreamSupport.spliteratorUnknownSize(q2matches.iterator(), java.util.Spliterator.ORDERED), ",")) + ".");
            }
        } else {
            System.out.println("2: Is '" + stringB + "' contained in '" + stringA + "'? No.");
        }
        System.out.println("3: Does '" + stringA + "' end with '" + stringB + "'? " + (q3 ? "Yes." : "No."));
    }
}
```

### Explanation:
1. **Determining if the first string starts with the second string**:
   - Use `substring` method to extract a substring of length equal to `stringB` and compare it with `stringB`.

2. **Determining if the first string contains the second string at any location**:
   - Use `indexOf` method which returns the index of the first occurrence of `stringB` in `stringA`, or `-1` if not found.

3. **Handling multiple occurrences for part 2**:
   - Use a regular expression with the global flag (`'g'`) to find all matches and store their indices in an ArrayList.

4. **Determining if the first string ends with the second string**:
   - Use `substring` method to extract a substring from the end of `stringA` with length equal to `stringB` and compare it with `stringB`.

5. **Printing the location of the match for part 2**:
   - If `q2` is true, print the index of the first occurrence using `indexOf`. If multiple matches are found, iterate through them and store their indices in an ArrayList, then print these indices.

6. **Handling multiple occurrences for part 2**:
   - Use a regular expression with the global flag (`'g'`) to find all matches and store their indices in an ArrayList.
