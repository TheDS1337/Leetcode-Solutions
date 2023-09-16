int dayOfYear(char *date)
{
  const int days_in_month[] = {
    0,
    31,
    59,
    90,
    120,
    151,
    181,
    212,
    243,
    273,
    304,
    334
  };

  date[4] = '\0';
  date[7] = '\0';
  
  int year = atoi(date);
  int month = atoi(&date[5]);
  int day = atoi(&date[8]);

  return days_in_month[month - 1] + day + (month > 2 && year > 1900 && (year - 1900) % 4 == 0);  
}
