# ATBASH Cipher

## History and usage

The *ATBASH cipher* is a monoalphabetic substitution cipher, one of the earliest that have been used. It was originally used to encode the Hebrew alphabet. The cipher encrypts a message without any key, using the affine function f(x) = |1x - 25|. This can be represented with simple tables :

| a  | b  | c  | d  | e  | f  | g  | h  | i  | j  | k  | l  | m  |
|----|----|----|----|----|----|----|----|----|----|----|----|----|
| 25 | 24 | 23 | 22 | 21 | 20 | 19 | 18 | 17 | 16 | 15 | 14 | 13 |

| n  | o  | p  | q | r | s | t | u | v | w | x | y | z |
|----|----|----|---|---|---|---|---|---|---|---|---|---|
| 12 | 11 | 10 | 9 | 8 | 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |

## Detailed Explanations : How it works?

1. Firstly, each character of the initial text (message to encrypt) is converted in a number from 0 to 25, corresponding to its position in the Latin alphabet which contains 26 letters --> (a = 0, b = 1 ... z = 25 ).

2. Then, each number obtained is transformed by an affine function (|1x - 25|). "x" is representing the number.

3. If we take all the images and put them in a list, we obtain n numbers corresponding to n charcaters of the initial text. The next step consists in finding the values of mudulo 26 of each number. (Modulo means remainder)
> Example : Modulo 4 of 19 is 3 because 15 = 4 * 4 + 3 In the other hand, modulo 26 of 26 is 0 because 26 = 26 * 1 + 0

4. Therefore, we cobtain a new list with n element, each between 0 and 25 both included. All these numbers are converted in letters of the Latin Alphabet using the tables below.

5. We finally create the final message by putting all the letters side by side.

| A | B | C | D | E | F | G | H | I | J | K  | L  | M  |
|---|---|---|---|---|---|---|---|---|---|----|----|----|
| 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 |

| N  | O  | P  | Q  | R  | S  | T  | U  | V  | W  | X  | Y  | Z  |
|----|----|----|----|----|----|----|----|----|----|----|----|----|
| 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | 24 | 25 |

## Weaknesses

- As the cipher doesn't use any key and the encryption algorithm is known to all, if the attacker knows that the message has been encrypted using ATBASH, he can simply break the message.

- We can also use **frequency analysis** to decrypt the message as each letter is encrypted with the same algorithm and the most common letters in english are :

<p align="center"> 
<img src="https://upload.wikimedia.org/wikipedia/commons/thumb/d/d5/English_letter_frequency_%28alphabetic%29.svg/340px-English_letter_frequency_%28alphabetic%29.svg.png">
</p>

## Example

### Encrypting

- Message to encrypt : ATTACK

- The function used to encrypt the message is : **f(x) = |1x - 25|**

- Using the above tables, ATTACK can be written as : **0 19 19 0 2 10**

### Decrypting

