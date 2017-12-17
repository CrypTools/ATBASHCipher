String.prototype.encrypt = function() {
	const alphabet = 'abcdefghijklmnopqrstuvwxyz '.split('')
	let output = []
	for (let i of this) {
		output += alphabet[26 - alphabet.indexOf(i.toLowerCase())]
	}
	return output;
}
