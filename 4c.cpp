/*

	We are given the values for the stocks of each day.
	Then we will check for local maximas and minimas and store them in some array.
	Let's say that the minimum array has the values of min1, min2, min3.....
	and the maximum array has the values of max1, max2, max3.....
	We will check profit for the trades of buying at min1 and selling at max1..providing min1 comes before max1. After this we will do the same for min2 and max2.
	Then we will calculate the same for min1 and max2. We will compare the following profits of the trades which will depend highly on the value of "x".
	We will continue doing the same for all trades and find the net maximum profit that we can get by trading in the following shares.

*/