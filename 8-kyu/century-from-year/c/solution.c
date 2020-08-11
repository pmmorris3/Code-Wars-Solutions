int centuryFromYear(int year) 
{
if (year % 100 == 0)
return year/100;
int std = year - (year % 100);
return std/100 +1;
}
