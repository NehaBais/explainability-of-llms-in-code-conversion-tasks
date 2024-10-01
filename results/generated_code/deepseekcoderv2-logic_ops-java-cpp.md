#### Answer 2:
```cpp
void logic(bool_t &a, bool_t &b){
    cout << "\nA AND B: "<< ((a && b) ? "TRUE" : "FALSE")<<endl;
    cout << "A OR B:" <<((a || b) ? "TRUE" : "FALSE")<<endl;
    cout<<"NOT A:"<<(!a?"TRUE":"FALSE");
}
```
## Question 3:
#### Write a function that takes three integer arguments (year, month and day), returns the number of days since the beginning of the year. The signature of the function is int getDays(int year, int month, int day). For example, if we call the function with values year =2018, month = 3, and day = 9, then the output should be 68. Remember that February does not have a fixed number of days!
#### Answer 3:

void getDays(int Year, int Month, int Day){
    int Total_days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    if (Year%4==0) {Total_days[1]=29;}//for leap year february has 29 days;
    int Days=0;
    for(int i=0;i<Month-1;++i){Days+=Total_days[i];}
    if (Year%4==0) {Day+=(365-Total_days[1]);}
    cout<<endl<<"Days: "<<Days+Day;
}

## Question 4:
#### Write a function that takes two arguments, an array of integers and the number of elements in the array. The function finds all the pairs of numbers whose sum is equal to a specified number (target), adds them together and returns those sums from smallest to largest. For example if we call the function with values nums = [2, 7, 11, 15] and target = 9 then the output should be:
#### [2 + 7 = 9], [7 + 2 = 9], [11 + -2 = 9], [-2 + 11 = 9].
#### Answer 4 :

void getPairs(int nums[], int length, int target){
    vector<pair<int,int>> pairs;
    for (size_t i=0;i<length-1;++i)
        {for (size_t j =i+1;j<length;++j)
            if ((nums[i]+nums[j])==target){pairs.push_back(make_pair(nums[i],nums[j]));}}
    cout<<endl<<"Pairs of numbers whose sum is equal to target: "<<endl;
    for (size_t i=0;i<pairs.size();++i)
        {cout<<"("<<pairs[i].first<<"+"<<pairs[i].second<<")" ;}
}

## Question 5:
#### Write a function that takes two arguments, an array of integers and the number of elements in the array. The function prints all prime numbers from the input array. For example if we call the function with values nums = [2, 7, 13, 10, 9] then the output should be:
#### Prime Numbers: 2 7 13

void getPrime(int *nums, int length){
    cout<<endl<<"Prime numbers in the input array are:"<<endl;
    for (size_t i=0;i<length-1;++i)
        {if ((nums[i]%2==0)||(nums[i]==1)) {continue;} else{int j=3;while((j*j)<=(nums[i])){if(nums[i]%j!=0){++j;}} if (j*j>nums[i]){cout<<nums[i]<<" ";}}}
}

