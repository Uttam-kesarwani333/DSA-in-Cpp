class Solution {
public:
    int getSum(int a, int b) {
        // return a+b;

        int carry=0;
    while (b != 0){
    carry = (a & b) << 1;
    a = a ^ b;
    b = carry;
    }
    return a;
    }

};

// Intuition
// Mainly, There are different ways to add two integers without using the '+' sign.

// Using the bitwise XOR operator (^):
// The bitwise XOR operator returns a 1 in each bit position where the corresponding bits of its two operands are different. To add two integers without using the '+' sign, we can perform the following steps:
// Compute the bitwise XOR of the two integers, which gives a number where each bit position represents the sum without carrying.
// Compute the bitwise AND of the two integers, which gives a number where each bit position represents the carry.
// Shift the carry one position to the left (i.e., multiply it by 2).
// Add the result of step 1 and the result of step 3 (recursively, if necessary).
// Here's an example:

// a = 12 # binary: 1100
// b = 7 # binary: 0111

// while (b != 0){
// carry = (a & b) << 1;
// a = a ^ b;
// b = carry;
// }
// return a;

// output: 19
// Explanation:

// The bitwise XOR of 12 and 7 is 15 (binary: 1111).
// The bitwise AND of 12 and 7 is 4 (binary: 0100), which represents the carry.
// The carry is shifted one position to the left, which gives 8 (binary: 1000).
// The result of step 1 and the result of step 3 are added, which gives 23 (binary: 10111).
// Since the result has more than 4 bits, we repeat the process with 23 and 0 (the new carry), which gives 19 (binary: 10011), which is the final result.

// 2.Using the bitwise complement (~) and the bitwise AND operator (&):
// The bitwise complement operator returns the complement of a number, which means that it flips all the bits. To add two integers without using the '+' sign, we can perform the following steps:

// Compute the bitwise complement of one of the integers.
// Compute the bitwise AND of the complement and the other integer.
// Compute the bitwise complement of the result of step 2.
// Add the original complement and the result of step 3.
// Here's an example:

// a = 12 # binary: 1100
// b = 7 # binary: 0111

// result = ~((~a) & b) + ~(~b & a)

// output: 19

// Explanation:

// The bitwise complement of 12 is -13 (binary: 11110011).
// The bitwise AND of -13 and 7 is 3 (binary: 0011).
// The bitwise complement of 3 is -4 (binary: 11111100).
// The bitwise complement of 7 is -8 (binary: 11111001).
// The sum of -13 and -4 is -17 (binary: 11101111).
// The bitwise complement of -17 is 19 (binary: 00010011), which is the final result.

// 3.Using the arithmetic shift operator (>>) and the bitwise XOR operator (^):
// The arithmetic shift operator shifts the bits of a number to the right (if the number is positive) or to the left (if the number is negative). To add two integers without using the '+' sign, we can perform the following steps:

// Compute the bitwise XOR of the two integers, which gives a number where each bit position represents the sum without carrying.
// Compute the bitwise AND of the two integers, which gives a number where each bit position represents the carry.
// Shift the carry one position

// Code
// class Solution {
//     public int getSum(int a, int b) {
//     //    int ans = Integer.sum(a,b);
//     //    return ans;
//     int carry=0;
//     while (b != 0){
//     carry = (a & b) << 1;
//     a = a ^ b;
//     b = carry;
//     }
//     return a;
//     }
// }