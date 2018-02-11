// Test made using EyeJS - https://eye.js.org

const path = require('path').normalize(__testDir + "/../js/")

const encrypt = require(path + "encrypt.js")
const decrypt = require(path + "decrypt.js")


eye.test("Encryption", "node",
	$ => $(encrypt("attack")).Equal("zggzxp")
)
eye.test("Decryption", "node",
	$ => $(decrypt("zggzxp")).Equal("attack"),
	$ => $(decrypt(encrypt("attack"))).Equal("attack")
)
