#   Given an integer of the form (YYYYMMDD), which represents a valid date, display the day, month and
#  year it represents.

# I create and initialize variable YYYYMMDD
yyyymmdd = 20241122

# Creating and initializing variables using unpacking.
year, month, day = round(yyyymmdd / 10000), round((yyyymmdd / 100) % 100), yyyymmdd % 100

# Showing result
print(year,"/",month,"/",day)