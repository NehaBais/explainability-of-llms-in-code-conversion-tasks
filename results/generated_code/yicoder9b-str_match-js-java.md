Here is the equivalent Java code for your JavaScript code:

```java
public class Main {
    static String stringA = "tacoloco";
    static String stringB = "co";

    public static void main(String[] args) {
        boolean q1, q3;
        int q2 = -1;
        int matchIndex = 0;
       
        // stringA starts with stringB
        q1 = stringA.startsWith(stringB);
      
        // stringA contains stringB and its location
        if (stringA.contains(stringB)) {
            q2 = stringA.indexOf(stringB);
          
            System.out.println("In fact, it happens " + countMatches() + 
                    " times within '"+stringA+"', at index"+(countMatches() > 1 ? "es" : "")+" "+getMatchIndexes()+".");
        }
      
        // stringA ends with stringB
        q3 = stringA.endsWith(stringB);
      
        System.out.println("1: Does '" + stringA + "' start with '" + stringB + "'? " + ( q1 ? "Yes." : "No."));
        System.out.println("2: Is '"+stringB+"' contained in '"+stringA+"'? " + (q2 != -1 ? "Yes, at index "+ q2 +".": "No."));
        System.out.println("3: Does '"+stringA+"' end with '"+stringB+"'? "   + ( q3 ? "Yes." : "No."));
    }
  
    // Method to find all occurrences of sub-string in a string.
    public static String getMatchIndexes() {
        StringBuilder matches = new StringBuilder();
        int index = -1;
       
        while ((index = stringA.indexOf(stringB, ++index)) != -1) {
            matches.append(index).append(' ');
        }
      
        return matches.toString().trim().replace(" ", ", ");
    }
  
    // Method to count the number of occurrences of a sub-string in a string.
    public static int countMatches(){
        int count = 0;
        int index = -1;
       
        while ((index = stringA.indexOf(stringB, ++index)) != -1){
            count++;
        }
      
        return count;
    }
}
```
