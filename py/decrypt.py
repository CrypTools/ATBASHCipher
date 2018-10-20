# ==============================================================================
#
#     Use:
#     decrypt("Svool Dliow!")
#     => "Hello World!"
#
# ==============================================================================

def decrypt(initial):

    output = ""
    alphabet = {}

    for i in range(26):
        alphabet[chr(65+i)] = chr(90 - i)
        alphabet[chr(97+i)] = chr(122 - i)

    for char in initial:
        if char in alphabet:
            output += alphabet[char]
        else:
            output += char

return output
