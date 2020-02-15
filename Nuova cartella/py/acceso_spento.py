#python 2.7.15
temperatura interna=int(input("temperaturainterna:"))
temperatura esterna=(input("temperaturaesterna:"))
umiditá=int(input("umidità"))
if(temperatura interna>70):
print("acceso")
else:
  if(temperatura esterna>100):
    print("acceso")
    else:
      if(umidità>90):
      print("acceso")
      else:
        print("spento")