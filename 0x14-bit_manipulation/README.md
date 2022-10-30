                          BIT MANIPULATION
Bit manipulation is the act of algorithmically manipulating bits or other pieces of data shorter than a byte.

BIT OPERATORS
some of the bit operators include; &, |, ~, ^, <<, >>.
* &: Binary AND Operator copies a bit to the result if it exists in both operands. Example;
  Assume if B = 60; and B = 13; Now in binary format they will be as follows:
  A = 0011 1100, B = 0000 1101
  Therefore, A&B = 0000 1000

* |: Binary OR Operator copies a bit if it exists in eather operand.
  from the example above, A|B = 0011 1101.

* ^: Binary XOR Operator copies the bit if it is set in one operand but not both.
  Example is, A^B = 0011 0001.

* ~: Binary Ones Complement Operator is unary and has the efect of 'flipping' bits.
  Example is; ~A  = 1100 0011

* <<: Binary Left Shift Operator. The left operands value is moved left by the number of bits specified by the right operand.
  Example is; A << 2 = 1111 0000.

* >>: Binary Right Shift Operator. The left operands value is moved right by the number of bits specified by the right operand.
  Example is; A >> 2 = 0000 1111.
