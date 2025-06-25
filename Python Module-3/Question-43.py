d={'a': 10,'b': 20,'c': 10,'d': 30,'e': 20}
uniquevalues = []
for value in d.values():
    if value not in uniquevalues:
        uniquevalues.append(value)

print("Unique values in the dictionary are:", uniquevalues)
