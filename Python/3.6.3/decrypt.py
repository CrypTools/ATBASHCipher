import string

def decrypt():
  initial = input("Give the message to decrypt (no space or special character) : ")
  numeros = []


  for char in initial:
    numeros.append(ord(char) - 97)
  
  output = ""
  alphabet = dict(zip(range(0, 26), string.ascii_lowercase))
  
  for char in numeros:
    image = str(alphabet[25 - char])
    output += image
  
  print("Decrypted message : " + output)
