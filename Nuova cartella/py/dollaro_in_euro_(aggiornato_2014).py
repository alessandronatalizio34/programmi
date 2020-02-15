EURO_TO_DOLLAR = 0.72 # Exchange rate on April 22, 2014
dollars = raw_input("How many Dollars do you wish to convert to Euros? :")
try:
    dollars = float(dollars)
except ValueError:
    print dollars, "is not a number!"
else:
    print dollars, "dollars =", dollars * EURO_TO_DOLLAR
    print "euros"
print "Thank you!"