```java
public class Main {
    public static void main(String[] args) {
        String stringA = "tacoloco";
        String stringB = "co";

        // stringA starts with stringB
        boolean q1 = stringA.startsWith(stringB);

        // stringA contains stringB
        int q2 = stringA.indexOf(stringB);
        StringBuilder sb = new StringBuilder();
        while (stringA.contains(stringB)) {
            sb.append(stringA.indexOf(stringB)).append(", ");
            stringA = stringA.substring(stringA.indexOf(stringB) + 1);
        }
        
        // stringA ends with stringB
        boolean q3 = stringA.endsWith(stringB);

        System.out.println("1: Does '" + stringA + "' start with '" + stringB + "'? " + (q1 ? "Yes." : "No."));
        System.out.println("2: Is '" + stringB + "' contained in '" + stringA + "'? " + (~q2 > 0 ? "Yes, at index " + q2 + "." : "No."));
        
        if (sb.length() > 0) {
            System.out.println("   In fact, it happens " + sb.toString().split(", ").length + " times within '" + stringA + "', at index" + (sb.toString().split(", ").length > 1 ? "es" : "") + " " + sb.substring(0, sb.length() - 2) + ".");
        }
        
        System.out.println("3: Does '" + stringA + "' end with '" + stringB + "'? " + (q3 ? "Yes." : "No."));
    }
}
```
Please note that JavaScript `~` operator can be used for getting the last match index, but it's not available in Java. So we have to use while loop to handle multiple occurrences of a string.
