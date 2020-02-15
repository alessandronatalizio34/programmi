i = 0
max = 5
somma = 0
media = 0
while i < max:
    numero = int(input())
    somma = somma + numero
    i = i + 1
media = float(somma) / max
print(media)