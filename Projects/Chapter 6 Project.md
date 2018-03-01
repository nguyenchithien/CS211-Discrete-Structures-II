# Chapter 6 Project

Spring 2018

## About

For this project, you will write a progrma that will help you calculate **Expected Values**, using the formula from Chapter 6.4.

You can use any programming language for this project.

### Turn in

Turn in your source file(s) and a screenshot of your program running to Canvas.

## Formula

Given some trial run many times, with *X* receiving a random value from the set
*{ x<sub>1</sub>, ..., x<sub>n</sub> }*, the Expected (Average) Value, *E[X]* is:

*E[X] = x<sub>1</sub> * Prob(X = x<sub>1</sub>) + ... + x<sub>n</sub> * Prob(X = x<sub>n</sub>)*

## Program Requirements

1. Ask the user the size of the sample set, *n(S) = ?*. The variable can be  a float named ```nS``` (Technically, this would be an int, but we don't want integer division later). Example sample set sizes:
         * Rolling 1 die: *n(S) = 6*
         * Rolling 2 dice: *n(S) = 36*
         * Flipping 1 coin: *n(S) = 2*
         * Flipping 2 coins: *n(S) = 4*
         * Flipping 3 coins: *n(S) = 8*
2. Ask the user how many outcomes there will be, *n = ?*. The variable can be an int named ```n```. *{ x<sub>1</sub>, x<sub>2</sub>, ..., x<sub>n</sub> }*
3. Create a floating point variable called ```expectedValue```, and initialize it to 0.
4. Create a loop that will loop *n* times. In the loop...:

    1. Ask the user what the value is for *x<sub>i</sub>*. You can make this a temporary variable named ```v```.
         
    2. Ask the user what amount of events, *n(E<sub>i</sub>)*, results in this outcome. You can make this a temporary variable named ```nE```.
         
    3. Calculate the probability of this outcome with *Prob(E<sub>i</sub>) = n(E<sub>i</sub>)/n(S)*. You can make this a temporary variable named ```p```. Calculate it with ```p = nE/nS```.
         
    4. Add on to the expected value by multiplying the *value* times the *probability*. ```expectedValue = expectedValue + v * p```
         
5. Once the loop has completed, display the result for the expected value, *E[X]* (```expectedValue```)

## Helper Code

### Step 1, getting the size of the sample set:

```c++
float nS;
cout << "What is n(S), the size of the sample set? ";
cin >> nS;
```

### Step 2, getting the total amount of outcomes:

```c++
int n;
cout << "What is the amount of outcomes? ";
cin >> n;
```

### Step 3, create an expected value variable:

```c++
float expectedValue = 0;
```

### Step 4, create a loop:

```c++
for ( int i = 0; i < n; i++ )
{
}
```

### Step 4-i, ask the user for the value:

```c++
float v;
cout << "What is the value for outcome " << i << "? ";
cin >> v;
```

### Step 4-ii, ask the user for n(E):

```c++
float nE;
cout << "How many events, n(E), have this outcome? ";
cin >> nE;
```

### Step 4-iii, calculate the probability:

```c++
float p = nE / nS;
```

### Step 4-iv, update the expected value:

```c++
expectedValue = expectedValue + v * p;
```

### Step 5, display the result:

```c++
cout << "The expected value, E[X], is: " << expectedValue << endl;
```

## Example Output

```
What is n(S), the amount of outcomes without restriction?
>> 36

How many outcomes are there?
>> 11

--------------------------------------------
OUTCOME 1:
         What is the value of this outcome?
         >> 2

         What is n(E), the amount of outcomes that have this value?
         >> 1

         Probability for this outcome is 1 in 36, or 2.77778%

--------------------------------------------
OUTCOME 2:
         What is the value of this outcome?
         >> 3

         What is n(E), the amount of outcomes that have this value?
         >> 2

         Probability for this outcome is 2 in 36, or 5.55556%

--------------------------------------------
OUTCOME 3:
         What is the value of this outcome?
         >> 4

         What is n(E), the amount of outcomes that have this value?
         >> 3

         Probability for this outcome is 3 in 36, or 8.33333%

--------------------------------------------
OUTCOME 4:
         What is the value of this outcome?
         >> 5

         What is n(E), the amount of outcomes that have this value?
         >> 4

         Probability for this outcome is 4 in 36, or 11.1111%

--------------------------------------------
OUTCOME 5:
         What is the value of this outcome?
         >> 6

         What is n(E), the amount of outcomes that have this value?
         >> 5

         Probability for this outcome is 5 in 36, or 13.8889%

--------------------------------------------
OUTCOME 6:
         What is the value of this outcome?
         >> 7

         What is n(E), the amount of outcomes that have this value?
         >> 6

         Probability for this outcome is 6 in 36, or 16.6667%

--------------------------------------------
OUTCOME 7:
         What is the value of this outcome?
         >> 8

         What is n(E), the amount of outcomes that have this value?
         >> 5

         Probability for this outcome is 5 in 36, or 13.8889%

--------------------------------------------
OUTCOME 8:
         What is the value of this outcome?
         >> 9

         What is n(E), the amount of outcomes that have this value?
         >> 4

         Probability for this outcome is 4 in 36, or 11.1111%

--------------------------------------------
OUTCOME 9:
         What is the value of this outcome?
         >> 10

         What is n(E), the amount of outcomes that have this value?
         >> 3

         Probability for this outcome is 3 in 36, or 8.33333%

--------------------------------------------
OUTCOME 10:
         What is the value of this outcome?
         >> 11

         What is n(E), the amount of outcomes that have this value?
         >> 2

         Probability for this outcome is 2 in 36, or 5.55556%

--------------------------------------------
OUTCOME 11:
         What is the value of this outcome?
         >> 12

         What is n(E), the amount of outcomes that have this value?
         >> 1

         Probability for this outcome is 1 in 36, or 2.77778%

--------------------------------------------
RESULT

The expected value E[X] = 7

Calculate another? (y/n):
```
