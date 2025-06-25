d=[
    {'item': 'item1', 'amount': 400},
    {'item': 'item2', 'amount': 300},
    {'item': 'item1', 'amount': 750}
]
result = {}

for i in d:
    item = i['item']
    amount = i['amount']
    if item in result:
        result[item] += amount
    else:
        result[item] = amount

print("Combined amounts:", result)
