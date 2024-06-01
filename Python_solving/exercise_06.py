#   Given two dates, report which is the most recent. Determine what would be the 
#  input data and legends to be reported according to the requested process.

# I create a lambda function that's gonna show the
most_recent = lambda a,b: print("First date is most recent than Second date.") if a < b else print("Second date most recent First date")
# I'll use the YYYYMMDD method to compare the dates
most_recent(20241122,20031122)