import java.util.*;
public class Main {
    public static void main(String[] args) {
        // Write your code here
        String input1 = "abcd";
        String input2 = "ab";
        System.out.println("Is first string starts with second string: "+input1.startsWith(input2));
        System.out.println("Is first string contains the second string at any location: "+input1.contains(input2));
        System.out.println("Is first string ends with second string: "+input1.endsWith(input2));
        int loc = -1;
        loc = input1.indexOf(input2);
        if (loc !=-1) {
            while (loc != -1) {
                System.out.println("Location of match for type 2 is: " + loc);
                loc = input1.indexOf(input2, loc+1);
            }
        } else {
            System.out.println("Type 2 does not have any match");
        }
    }
}