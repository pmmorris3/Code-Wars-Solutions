bool isPrime(int num) {
  bool prime = true;
  if (num <= 1) return false;
  if (num == 2) return true;
  for (int i{2}; i < sqrt(abs(num)) + 1; i++){
    if (num % i == 0){
      prime = false;
  }
  }
  if (prime == true){
  return true;
  }
  return false;
}