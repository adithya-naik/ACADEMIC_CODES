total_books  = 60
cost_per_book = 24.95
discount=0.40
amount_bookcost = 24.95*(1-discount)*60
amount_shipping = 3+(0.75*(total_books-1))

total_amount = amount_bookcost + amount_shipping

print("The Total Cost = ",total_amount)
