int sum_digits(int n) {
  if (n < 0)
  {
    n = 0 - n;  
  }
  int sum = 0;
  sum += n % 10;
  while (n > 0){
    n = (int) (n- n %10)/10;
    sum += n % 10; 
    }
  return sum;
}