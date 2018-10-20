/* ==========================================================================
 *
 *    Use:
 *    'Svool Dliow!'.decrypt()
 *    => 'Hello World'
 *
 * ========================================================================== */

String.prototype.decrypt = function() {
	let output = ""
    let alphabet = {}

    const chr = x => String.fromCharCode(x)

    for (let i = 0; i < 26; i++) {
        alphabet[chr(65 + i)] = chr(90 - i)
        alphabet[chr(97 + i)] = chr(122 - i)
    }

    for (let char of this) {
        if (char in alphabet) output += alphabet[char]
        else output += char
    }

	return output
}
module.exports = text => text.decrypt()
