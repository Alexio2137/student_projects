liczby = []
while True:
	z1 = input("czy chcesz dodać liczbę (tak, nie):  ")
	try:

		if z1 == "tak":
			liczby.append(int(input("Napisz liczbę jaką chcesz dodać:  ")))
		elif z1 == "nie":
			break
	except Exception as e:
		print(f"Błąd to {e}")
suma = 0
for liczba in liczby:
	suma += liczba

if suma == 0:
	print("suma to zero")
	print("liczba jest parzysta")
elif suma != 0:
	print(f"Suma to {suma}")
	
