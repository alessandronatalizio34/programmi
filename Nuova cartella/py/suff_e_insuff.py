conta = 0
votitotali = 5
suff = 0
insuf = 0
while conta < votitotali:
    print("dammi il voto")
    voto = int(input())
    conta = conta + 1
    if voto >= 6:
        suff = suff + 1
    else:
        insuf = insuf + 1
print("i voti suff sono")
print(suff)
print("i voti insuf sono")
print(insuf)