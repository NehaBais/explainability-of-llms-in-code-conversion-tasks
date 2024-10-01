```java
public class Main {
    public static void main(String[] args) {
        String str1 = "abcd";
        String str2 = "ab";
        
        // Part 1: Determining if the first string starts with second string
        boolean result1 = str1.startsWith(str2);
        System.out.println(result1); // prints true

        String str3 = "zn";

        // Part 2: Determining if the first string ends with the second string
        boolean result2 = str1.endsWith(str3);
        System.out.println(result2); // prints false

        String str4 = "abab";
        String str5 = "bb";
        
        // Part 3: Determining if the first string contains the second string at any location
        int result3 = str4.indexOf(str5);
        if (result3 == -1) {
            System.out.println("String is not found"); 
        } else {
            System.out.println("String found at index " + result3); // prints String is not found

            String str6 = "ab";
            
            int result4 = str4.indexOf(str6);
            if (result4 == -1) {
                System.out.println("String is not found"); 
            } else {
                System.out.println("String found at index " + result4); // prints String found at index 0

                int result5 = str4.indexOf(str6, result4 + 1);
                if (result5 == -1) {
                    System.out.println("String is not found"); 
                } else {
                    System.out.println("String found at index " + result5); // prints String found at index 2
                }
            }
        }
    }
}
```
