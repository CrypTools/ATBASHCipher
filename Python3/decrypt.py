import string

def decrypt(initial):
  """ Use : decrypt("nvhhztv")
  => 'message'
  """
  initial = initial.lower()
  mylist = []

  for char in initial:
    mylist.append(ord(char) - 97)
  
  output = ""
  alphabet = dict(zip(range(0, 26), string.ascii_lowercase))
  
  for char in mylist:
    image = str(alphabet[25 - char])
    output += image
  
  return output
