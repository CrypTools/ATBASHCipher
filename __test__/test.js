// Test made using EyeJS - https://eye.js.org

const path = require('path').normalize(__testDir + "/../js/")

const encrypt = require(path + "encrypt.js")
const decrypt = require(path + "decrypt.js")


eye.test("Encryption", "node",
	$ => $(encrypt("attack")).Equal("zggzxp"),
	$ => $(encrypt("More complex")).Equal("Nliv xlnkovc")
)
eye.test("Decryption", "node",
	$ => $(decrypt("zggzxp")).Equal("attack"),
	$ => $(decrypt(encrypt("attack"))).Equal("attack"),
	$ => $(decrypt(encrypt("More complex"))).Equal("More complex")
)
