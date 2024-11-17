
const _ = (x) => x
module.exports = grammar({
	name: "pluto",
	rules: {
		program: _(() => repeat(/\w/)),
	},
})
