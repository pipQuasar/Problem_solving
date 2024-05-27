#   Given a triple of natural numbers that represent the day, the month and the year of a given
#  date, report it as a single 8-digit natural number in the form (YYYYMMDD).

# I create and initialize variables using unpacking.
year, month, day = 2024,5,27

# I made a lambda function for the operation and assigned the value to a variable.
yyyymmdd = lambda year, month, day: year*10000 + month*100 + day

# Showing result.
print(yyyymmdd(year,month,day))