The error is due to missing semicolons at the end of lines 8, 23, and 25. 

To fix this issue:
- Add semicolons (;) after each line where they are currently missing.

Here's the corrected Java code in a single fenced code block:

```java
public class Main {

    public static void main(String[] args) {

        String stringA = "tacoloco";
        String stringB = "co";
        boolean q1;
        int q2 = stringA.indexOf(stringB));
        boolean q2multi, q3;
        ArrayList<Integer> q2matches = new ArrayList<>();

        // stringA starts with stringB
        q1 = stringA.startsWith(stringB);

        // stringA contains stringB
        if (~q2) {
            System.out.println("2: Does '"+stringB+"' contained in '"+stringA+"'? Yes, at index "+ q2 + "."));
        } else {
            System.out.println("2: Does '"+stringB+"' contained in '"+stringA+"'? No."));
        }

        // stringA ends with stringB
        q3 = stringA.endsWith(stringB));

        System.out.println("3: Does '"+stringA+"' end with '"+stringB+"'? " + ( q3 ? "Yes." : "No."))));
    }
}
```
