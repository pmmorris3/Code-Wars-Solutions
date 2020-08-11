double find_average(double* array, int length) {
double sum = 0;
for (int i = 0; i < length; i++){
  sum += array[i];
}
double avg = sum/(double)length;
  return avg;
}