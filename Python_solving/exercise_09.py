# Given a month and the corresponding year, report how many days the month has.
def is_leap_year(year):
    return year % 4 == 0 and (year % 100 != 0 or year % 400 == 0)

def how_many_days(year, month):
    days_in_month = {
        1: 31, 2: 28, 3: 31, 4: 30,
        5: 31, 6: 30, 7: 31, 8: 31,
        9: 30, 10: 31, 11: 30, 12: 31
    }
    
    if month == 2 and is_leap_year(year):
        print("This month has 29 days, because it's a leap year!")
    else:
        print(f"This month has {days_in_month.get(month, 'an invalid number of')} days!")

how_many_days(2024, 2)