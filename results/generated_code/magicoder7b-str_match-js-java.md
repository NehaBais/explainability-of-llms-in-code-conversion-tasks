 Here is the equivalent Java code for your JavaScript code:

```java
public class Main {
    public static void main(String[] args) {
        String stringA = "tacoloco";
        String stringB = "co";

        // Check if 'stringA' starts with 'stringB'
        boolean q1 = stringA.substring(0, stringB.length()).equals(stringB);

        // Check if 'stringA' contains 'stringB' at any location
        int q2 = stringA.indexOf(stringB);

        // Check if 'stringA' ends with 'stringB'
        boolean q3 = stringA.endsWith(stringB);

        System.out.println("1: Does '" + stringA + "' start with '" + stringB + "'? " + (q1 ? "Yes." : "No."));
        
        // If 'stringA' contains 'stringB', print the first occurrence index and count of all occurrences
        if(q2 != -1) {
            System.out.println("2: Is '" + stringB + "' contained in '" + stringA + "', at index " + q2);
            
            // Find all occurrences of 'stringB' in 'stringA' and print their positions
            int count = 0;
            while((q2 = stringA.indexOf(stringB, q2)) != -1) {
                System.out.println("   In fact, it happens " + ++count + " time" + (count > 1 ? "s" : "") + 
                        " within '" + stringA + "', at index " + q2);
            }
        } else {
            System.out.println("2: Is '" + stringB + "' contained in '" + stringA + "'? No.");
        }
        
        // Check if 'stringA' ends with 'stringB'
        System.out.println("3: Does '" + stringA + "' end with '" + stringB + "'? " + (q3 ? "Yes." : "No."));
    }
}
```

This Java code also includes the functionality for locating multiple occurrences of 'stringB' in 'stringA'.
