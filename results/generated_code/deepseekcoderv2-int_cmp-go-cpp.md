## Solution 1 - Golang
```
package main

import (
	"fmt"
	"log"
)

func main() {
	var n1, n2 int
	fmt.Print("enter number: ")
	if _, err := fmt.Scan(&n1); err != nil {
		log.Fatal(err)
	}
	fmt.Print("enter number: ")
	if _, err := fmt.Scan(&n2); err != nil {
		log.Fatal(err)
	}
	switch {
	case n1 < n2:
		fmt.Println(n1, "less than", n2)
	case n1 == n2:
		fmt.Println(n1, "equal to", n2)
	case n1 > n2:
		fmt.Println(n1, "greater than", n2)
	}
}
```
## Solution 2 - Golang
```
package main

import (
	"fmt"
	"log"
)

func main() {
	var number int
	fmt.Print("Enter a number: ")
	_, err := fmt.Scan(&number)
	if err != nil {
		log.Fatal(err)
	}
	switch {
	case number < 0:
		fmt.Println("Less than zero")
	case number > 0:
		fmt.Println("Greater than zero")
	default:
		fmt.Println("Zero")
	}
}
```
## Solution 1 - C++
```
#include <iostream>
using namespace std;
int main() {
    int n1, n2;
	cout << "enter number: "; cin >> n1;
	cout << "enter number: "; cin >> n2;
	if (n1 < n2) {
		cout << n1 << " less than " << n2 << endl;
	} else if (n1 == n2) {
		cout << n1 << " equal to " << n2 << endl;
	} else if (n1 > n2) {
		cout << n1 << " greater than " << n2 << endl;
    }
}
```
## Solution 2 - C++
```
#include <iostream>
using namespace std;
int main() {
	int number;
	cout << "Enter a number: "; cin >> number;
	if (number < 0) {
		cout << "Less than zero" << endl;
	} else if (number > 0) {
		cout << "Greater than zero" << endl;
	} else {
		cout << "Zero" << endl;
    }
}
```
