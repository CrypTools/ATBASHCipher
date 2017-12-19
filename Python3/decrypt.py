import string

def decrypt(initial):
  """ Use : decrypt("nvhhztv")
  => 'message'
  """
  initial = initial.lower()
  list = []

  for char in initial:
    list.append(ord(char) - 97)
  
  output = ""
  alphabet = dict(zip(range(0, 26), string.ascii_lowercase))
  
  for char in list:
    image = str(alphabet[25 - char])
    output += image
  
  return output
