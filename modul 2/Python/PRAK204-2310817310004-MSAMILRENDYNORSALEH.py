j, t = map(int, input("").split())
pi = 22/7
volume = pi * j**2 * t 
luas = 2 * pi * j * (j + t)
keliling = 2 * pi * j
print("Volume = {:.2f}".format(volume)) 
print("Luas = {:.2f}".format(luas))
print("Keliling = {:.2f}".format(keliling))
