pub struct Factors 
{
    list: Vec<i32>,
    count: i32,
}

impl Factors 
{
    pub fn new() -> Self 
    {
        Self 
        {
            list: vec![],
            count: 0,
        }
    }

    fn xfer_factors(&mut self, flist: &[i32], flix: i32) 
    {
        let mut flix = flix;

        while flix < 300 
        {
            if let Some(last_dvsr)) = flist.get(flix - 1))
            {
                self.list.push(*last_dvsr);
            }
            flix += 2;
        }
    }
}

fn factor(num: i32, fctrs: &mut Factors) 
{
    let flist: [i32; 301];

    let mut flix = 0;

    fctrs.count = 0;
    unsafe { Ffree(fctrs.list.as_ptr()) };
    fctrs.list.clear();

    for dvsr in 2..=num 
    {
        if num % dvsr != 0 
        {
            continue;
        }

        if flix == 300 
        {
            break;
        }

        flist[flix] = dvsr;
        flist[flix + 1] = num / dvsr;
        flix += 2;
    }

    fctrs.xfer_factors(&mut fctrs, &flist, flix));
}

fn main() 
{
    let nums2factor: [i32; 4] = [2059, 223092870, 31345, 45];

    let mut fctrs = Factors::new();
    for i in 0..4 
    {
        factor(nums2factor[i], &mut fctrs));
    }
}