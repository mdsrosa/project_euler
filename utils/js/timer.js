module.exports = function (callback) {
	var ftime  = process.hrtime(),
	 		result = callback();

	console.log("=> Result: " + result);
	var diff = process.hrtime(ftime);

	console.log("=> Time: "+ ((diff[1] * 1e-10).toFixed(7)) +"s");
}
