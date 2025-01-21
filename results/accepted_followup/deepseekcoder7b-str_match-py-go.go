import  (
	strs "strings"
	"fmt"
)

func main() {
	str1 := "abcd"
	str2 := "ab"
	fmt.Println(strs.HasPrefix(str1, str2)) //prints true if str1 starts with str2
    
    str3 := "zn"
	fmt.Println(strs.HasSuffix(str1, str3))  //prints true if str1 ends with str3

	//For checking substring existence
	str4 := "abab"
	subStr := "ab"
	fmt.Println(strs.Contains(str4, subStr))   //returns true if str4 contains subStr
  
    //To find the position of substring in a string
	loc := 0
	for {
        newLoc := strs.Index(str4[loc:], subStr)
        if newLoc == -1 || loc+newLoc >= len(str4){
            break
         } else{
             fmt.Println(loc + newLoc)  //prints the location of match for part 2
			loc += newLoc + 1           //increase loc by length of subStr and 1 to find next occurrence
        }
	}
}