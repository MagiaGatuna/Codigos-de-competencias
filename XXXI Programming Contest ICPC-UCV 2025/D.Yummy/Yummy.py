n = input()

count = n.count('Yu')

countother = len(n) - (2 * count)

if count > countother // 2:
    print("Yummy")
else:
    print("Not so Yummy")
