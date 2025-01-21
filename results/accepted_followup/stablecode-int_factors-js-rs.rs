pub fn factors(num: u64) 
-> Vec<u64> {

    let mut n_factors 
= Vec::new();

    for i in 
1..=((num as f64).sqrt() as u64)) 
{
        if num 
% i == 0 
{
            n_factors.push(i);
            if (num / i) != i {
                n_factors.push((num / i)));
            }
        }
    }

    n_factors.sort();  // numeric sort

    n_factors
}