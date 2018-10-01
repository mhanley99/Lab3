# Lab3

// Matthew Hanley
// Lab 3 Explanations
// COSC 2030
// October 1, 2018



Test Results for shortSum()
250 = 31375
251 = 31626
252 = 31878
253 = 32131
254 = 32385
255 = 32640
256 = -32640
257 = -32383

2. Based on the above test results from shortSum(), the overflow occurs at 256 because the output is negative.

3. Test Results for longSum()
500 = 125250
1000 = 500500
10000 = 50005000
50000 = 1250025000
100000 = 705082704 // This is less than the result for 50000, therefore it is incorrect and an overflow has occurred.
65000 = 2112532500
65500 = 2145157750
65600 = -2143254496
65550 = -2146533271
65530 = 2147123215
65540 = -2147188726
65535 = 2147450880
65536 = -2147450880 // Overflow occurs here.

4. Test results for floatFactorial()
10 = 3.6288e+06
20 = 2.4329e+18
30 = 2.65253e+32
40 = inf
35 = inf // Overflow occurs here.
33 = 8.68332e+36
34 = 2.95233e+38 

5. Test results for doubleFactorial()
35 = 1.03331e+40
50 = 3.04141e+64
70 = 1.19786e+100
100 = 9.33262e+157
150 = 5.71338e+262
200 = inf
175 = inf
165 = 5.42391e+295
170 = 7.25742e+306
172 = inf
171 = inf // Overflow occurs here.

6. The expected value for this function is always zero, and an overflow has occurred when the output is not zero.

Using floats:
20 = 1.19209e-07
10 = 1.19209e-07 // Overflow occurs here.
5 = 0
7 = 0
8 = 0
9 = 0

Using doubles: 
10 = -1.11022e-16
5 = 0
9 = 2.22045e-16
7 = -2.22045e-16
6 = -1.11022e-16 // Overflow occurs here.

The overflow occurs in the denominator, and the ratio is slightly different than it should be, but only slightly.
This is why the incorrect results are still extremely close to zero.

7. The error occurs in the final iteration of the loop. The function outputs i = 4.4, despite the for code specifing
for the loop to stop if i is not less than 4.4. Most likely this is caused by i being something like 4.3999999997. 
This is less than 4.4 but the computer displays 4.4.

8. Using double, the function does not output i = 4.2 which is the correct, desired behavior. In this case, the double
holds the index as 4.4000000 rather than 4.39999999


