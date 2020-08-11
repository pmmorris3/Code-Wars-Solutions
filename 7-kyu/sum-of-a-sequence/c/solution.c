
unsigned sequence_sum(unsigned start, unsigned end, unsigned step)
{
  unsigned ret = 0;
  unsigned i = start;
  while (i <= end){
    ret += i;
    i += step;
  }
    return ret;
}



