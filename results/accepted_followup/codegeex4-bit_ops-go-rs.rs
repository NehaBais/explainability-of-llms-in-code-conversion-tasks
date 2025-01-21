let ror = (((a >> ub) | (a.wrapping_neg() & ((1u32 << ub) - 1) as i16).wrapping_neg()) 
    << (16 - ub)) as u16 
| ((ua << (16 - ub)) | (ua >> ub)) as u16;