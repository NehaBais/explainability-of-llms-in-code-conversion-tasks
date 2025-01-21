let mut string: String =  "def".to_owned(); // convert String to owned type (String is not Copy)
string =  "abc".to_owned() + &string;