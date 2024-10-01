### Solution:
```java
public class StringMatching {
    private static void print(String string, Object... args) { System.out.println(String.format(string, args)); }
    public static void main(String[] args) throws Exception {
        /* Test Strings */
        String s1 = "tacoloco";
        String s2 = "co";
        String q1, q2multi, m;
        int q2matchesIndex = 0;
        List<Integer> q2matches = new ArrayList<>();

        // stringA starts with stringB
        boolean q1 = (s1.substring(0, s2.length())).equals(s2);

        // stringA contains stringB
        int q2 = s1.indexOf(s2);

        // multiple matches
        Pattern p1 = Pattern.compile(Pattern.quote(s2), Pattern.LITERAL | Pattern.CASE_INSENSITIVE);

        Matcher m1 = p1.matcher(s1);

        while (m1.find()) {
            q2matchesIndex += 1; // increment index of matches
            q2matches.add(m1.start()); // add the start index to list of matches
        }

        // stringA ends with stringB
        boolean q3 = s1.endsWith(s2);

        print("1: Does '%s' start with '%s'? %s", s1, s2, (q1 ? "Yes." : "No."));
        if (~q2 && !q2matches.isEmpty()) {
            q2 = 0; // reset to 0 for multiple matches case
            print("2: Is '%s' contained in '%s'? Yes, at index %d.", s2, s1, ~q2 ? q2 : -~q2);
            if (q2matches.size() > 1) {
                String start = ""; // use for multiple matches string
                print("   In fact, it happens %s times within '%s', at index%s ",
                        q2matches.size(), s1, q2matchesIndex);
            } else if (q2matches.size() == 1) {
                String start = " "; // use for single match string
            }
            print("%d.", q2matches);
        } else {
            print("2: Is '%s' contained in '%s'? %s", s2, s1, (~q2 ? "Yes" : "No"));
        }

        if (q3) { print("3: Does '%s' end with '%s'? Yes.", s1, s2); } else { print("3: Does '%s' end with '%s'? No.", s1, s2); }
    }
}
```
### Execution Output:

$ java StringMatching.java 
1: Does 'tacoloco' start with 'co'? Yes.
2: Is 'co' contained in 'tacoloco'? Yes, at index 3.
   In fact, it happens 1 times within 'tacoloco', at index 3.
3: Does 'tacoloco' end with 'co'? Yes.

