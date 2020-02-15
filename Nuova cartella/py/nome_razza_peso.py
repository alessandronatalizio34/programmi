#python 2.7.15

nome1=int(input("nome"))
razza1=int(input("razza"))
peso1=int(input("peso"))
nome2=int(input("nome"))
razza2=int(input("razza"))
peso2=int(input("peso"))
nome3=int(input("nome"))
razza3=int(input("razza"))
peso3=int(input("peso"))
if(peso1>peso2):
  if(peso1>peso3):
    print("il cane piu pesante e il primo came di nome1 e razza1")
    else:
      print("cane nome3 e razza3")
   else:
     if(peso2>peso3): 
       print("il secondo cane e piu pesante")
       else:
         print("il terzo cane e piu pesante")