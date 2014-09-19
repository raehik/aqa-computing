***folder:*** https://github.com/raehik/testStore
***commit:*** https://github.com/raehik/testStore/commit/1e6fa31038fc7d6cdbf0b81ff9d641d3fe3db664

----------------------
1e6fa31: Refactor inputting & var. names; add removeTest
----------------------

Amartya pointed out that we did 0 input checking for test dates, and Java
*immediately* crashed with an InputMismatchException. I created a private
method for 'forcing' a correct input (prompting over and over again).

The same commit also adds some support for extra feature 3: editing results.
Trivial changes, will come soon.
