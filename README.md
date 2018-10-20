# ATBASH Cipher
<p align="center">
<!-- replace image by project Image -->
<img height="128" src="https://cryptools.github.io/img/atbash.svg">
</p>
<p align="center">
<img src="https://cryptools.github.io/img/status/implemented.svg">
<img src="https://img.shields.io/travis/CrypTools/ATBASHCipher.svg">
<img src="https://img.shields.io/github/license/Cryptools/ATBASHCipher.svg">
<img src="https://img.shields.io/github/contributors/Cryptools/ATBASHCipher.svg">
</p>

A simple linear cipher originally used on the Hebrew alphabet.

## How it works

### Encoding

The ATBASH cipher is pretty simple, and all its does is reverse the letters in the alphabet: A becomes Z, B becomes Y, ..., Y becomes B, Z becomes A.

Here's the full table:

| A | B | C | D | E | F | G | H | I | J | K | L | M |
|---|---|---|---|---|---|---|---|---|---|---|---|---|
| Z | Y | X | W | V | U | T | S | R | Q | P | O | N |

| N | O | P | Q | R | S | T | U | V | W | X | Y | Z |
|---|---|---|---|---|---|---|---|---|---|---|---|---|
| M | L | K | J | I | H | G | F | E | D | C | B | A |

Encoding the word `crypto`, we get:

```txt
C R Y P T O
X I B K G L
```

### Decoding

We can observe that applying the code twice to a message letter, will leave us with the original message. To decrypt, we just have to re-apply the code.

```txt
X I B K G L
C R Y P T O
```

## Cons

* Pretty simple and famous cipher.
* Frequency analysis can be used to crack the code, if the message is long enough.

## Implementations

|    Language    |            Encrypt             |            Decrypt             |
|----------------|--------------------------------|--------------------------------|
|   Javascript   |  [encrypt.js](js/encrypt.js)   |  [decrypt.js](js/decrypt.js)   |
|   Python       | [encrypt.py](py/encrypt-v2.py) | [decrypt.py](py/decrypt-v2.py) |
|   Swift        |  [lib.swift](swift/lib.swift)  |  [lib.swift](swift/lib.swift)  |

## Running the tests

Tests are automatically handled by [Travis CI](https://travis-ci.org/CrypTools/ATBASHCipher/).

## Contributing

Please read [CONTRIBUTING.md](https://github.com/CrypTools/cryptools.github.io/blob/master/CONTRIBUTING.md) for details on our code of conduct, and the process for submitting pull requests to us.

## Versioning

We use [SemVer](http://semver.org/) for versioning. For the versions available, see the [tags on this repository](https://github.com/CrypTools/ATBASHCipher/tags).

## Authors

Made with ❤️ at CrypTools.

See also the list of [contributors](https://github.com/CrypTools/ATBASHCipher/contributors) who participated in this project.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details
