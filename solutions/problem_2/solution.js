console.log("Solution 1");
require('./../../utils/js/timer')(function () {
	var f1 = 0, f2 = 1, s = 0;

	while (f2 < 4000000) {
		var aux = f1;
		f1 = f1 + f2;
		f2 = aux;

		if (f2 % 2 == 0)
			s += f2
 	} 

	return s
})

console.log("Solution 2");
require('./../../utils/js/timer')(function () {
	var s = 0, a =1, b=1, c = a + b;
	while (c < 4000000) {
		s += c;
		a = b + c;
		b = a + c;
		c = a + b;
	}

	return s;
})
