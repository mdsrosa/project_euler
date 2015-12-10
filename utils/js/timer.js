module.exports = function (callback) {
	var ftime  = new Date(),
	 		result = callback(),
		  stime  = new Date();

	console.log("Result: " + result);
	console.log("Time :" + (stime.getTime() - ftime.getTime()) / 1000 + "s");
}
