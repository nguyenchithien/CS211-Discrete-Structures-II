# Chapter 6 Project

Spring 2018

## About

For this project, you will write a program that will help you calculate **Expected Values**, using the formula from Chapter 6.4.

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

## Tests

Here are some test scenarios you can use to check your math.

### Test 1: Rolling 1 die

When rolling one die, the sample size *n(S)* is 6.

There are 6 total outcomes:

<table style="width: 100%;" border="1">
<tbody>
<tr>
<td style="width: 35%;">Outcome value <img class="equation_image" title="x_i" src="https://canvas.jccc.edu/equation_images/x_i" alt="LaTeX: x_i" data-equation-content="x_i" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;
  &lt;msub&gt;
    &lt;mi&gt;x&lt;/mi&gt;
    &lt;mi&gt;i&lt;/mi&gt;
  &lt;/msub&gt;
&lt;/math&gt;" /></td>
<td style="width: 31.4028%;">Events. <img class="equation_image" title="E_i" src="https://canvas.jccc.edu/equation_images/E_i" alt="LaTeX: E_i" data-equation-content="E_i" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;
  &lt;msub&gt;
    &lt;mi&gt;E&lt;/mi&gt;
    &lt;mi&gt;i&lt;/mi&gt;
  &lt;/msub&gt;
&lt;/math&gt;" /></td>
<td style="width: 25.5972%;">Amount of events <img class="equation_image" title="n\left(E_i\right)" src="https://canvas.jccc.edu/equation_images/n%255Cleft(E_i%255Cright)" alt="LaTeX: n\left(E_i\right)" data-equation-content="n\left(E_i\right)" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;
  &lt;mi&gt;n&lt;/mi&gt;
  &lt;mrow&gt;
    &lt;mo&gt;(&lt;/mo&gt;
    &lt;msub&gt;
      &lt;mi&gt;E&lt;/mi&gt;
      &lt;mi&gt;i&lt;/mi&gt;
    &lt;/msub&gt;
    &lt;mo&gt;)&lt;/mo&gt;
  &lt;/mrow&gt;
&lt;/math&gt;" /></td>
<td style="width: 25.5972%;">Probability <img class="equation_image" title="Prob\left(E_i\right)\:=\frac{\:n\left(E_i\right)}{n\left(S\right)}" src="https://canvas.jccc.edu/equation_images/Prob%255Cleft(E_i%255Cright)%255C%253A%253D%255Cfrac%257B%255C%253An%255Cleft(E_i%255Cright)%257D%257Bn%255Cleft(S%255Cright)%257D" alt="LaTeX: Prob\left(E_i\right)\:=\frac{\:n\left(E_i\right)}{n\left(S\right)}" data-equation-content="Prob\left(E_i\right)\:=\frac{\:n\left(E_i\right)}{n\left(S\right)}" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;
  &lt;mi&gt;P&lt;/mi&gt;
  &lt;mi&gt;r&lt;/mi&gt;
  &lt;mi&gt;o&lt;/mi&gt;
  &lt;mi&gt;b&lt;/mi&gt;
  &lt;mrow&gt;
    &lt;mo&gt;(&lt;/mo&gt;
    &lt;msub&gt;
      &lt;mi&gt;E&lt;/mi&gt;
      &lt;mi&gt;i&lt;/mi&gt;
    &lt;/msub&gt;
    &lt;mo&gt;)&lt;/mo&gt;
  &lt;/mrow&gt;
  &lt;mspace width=&quot;mediummathspace&quot; /&gt;
  &lt;mo&gt;=&lt;/mo&gt;
  &lt;mfrac&gt;
    &lt;mrow&gt;
      &lt;mspace width=&quot;mediummathspace&quot; /&gt;
      &lt;mi&gt;n&lt;/mi&gt;
      &lt;mrow&gt;
        &lt;mo&gt;(&lt;/mo&gt;
        &lt;msub&gt;
          &lt;mi&gt;E&lt;/mi&gt;
          &lt;mi&gt;i&lt;/mi&gt;
        &lt;/msub&gt;
        &lt;mo&gt;)&lt;/mo&gt;
      &lt;/mrow&gt;
    &lt;/mrow&gt;
    &lt;mrow&gt;
      &lt;mi&gt;n&lt;/mi&gt;
      &lt;mrow&gt;
        &lt;mo&gt;(&lt;/mo&gt;
        &lt;mi&gt;S&lt;/mi&gt;
        &lt;mo&gt;)&lt;/mo&gt;
      &lt;/mrow&gt;
    &lt;/mrow&gt;
  &lt;/mfrac&gt;
&lt;/math&gt;" /></td>
</tr>
<tr>
<td style="width: 35%;">1</td>
<td style="width: 31.4028%;">{ 1 }</td>
<td style="width: 25.5972%;">1</td>
<td style="width: 25.5972%;">1/6</td>
</tr>
<tr>
<td style="width: 35%;">2</td>
<td style="width: 31.4028%;">{ 2 }</td>
<td style="width: 25.5972%;">1</td>
<td style="width: 25.5972%;">1/6</td>
</tr>
<tr>
<td style="width: 35%;">3</td>
<td style="width: 31.4028%;">{ 3 }</td>
<td style="width: 25.5972%;">1</td>
<td style="width: 25.5972%;">1/6</td>
</tr>
<tr>
<td style="width: 35%;">4</td>
<td style="width: 31.4028%;">{ 4 }</td>
<td style="width: 25.5972%;">1</td>
<td style="width: 25.5972%;">1/6</td>
</tr>
<tr>
<td style="width: 35%;">5</td>
<td style="width: 31.4028%;">{ 5 }</td>
<td style="width: 25.5972%;">1</td>
<td style="width: 25.5972%;">1/6</td>
</tr>
<tr>
<td style="width: 35%;">6</td>
<td style="width: 31.4028%;">{ 6 }</td>
<td style="width: 25.5972%;">1</td>
<td style="width: 25.5972%;">1/6</td>
</tr>
</tbody>
</table>

### Test 2: Rolling 2 dice

When rolling 2 dice and summing their values, the sample size *n(S)* is 36. There are 11 total outcomes:

<table style="width: 100%;" border="1">
<tbody>
<tr style="height: 48px;">
<td style="width: 24.7449%; height: 48px;">Outcome value <img class="equation_image" title="x_i" src="https://canvas.jccc.edu/equation_images/x_i" alt="LaTeX: x_i" data-equation-content="x_i" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;
  &lt;msub&gt;
    &lt;mi&gt;x&lt;/mi&gt;
    &lt;mi&gt;i&lt;/mi&gt;
  &lt;/msub&gt;
&lt;/math&gt;" /></td>
<td style="width: 41.2551%; height: 48px;">Events. <img class="equation_image" title="E_i" src="https://canvas.jccc.edu/equation_images/E_i" alt="LaTeX: E_i" data-equation-content="E_i" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;
  &lt;msub&gt;
    &lt;mi&gt;E&lt;/mi&gt;
    &lt;mi&gt;i&lt;/mi&gt;
  &lt;/msub&gt;
&lt;/math&gt;" /></td>
<td style="width: 25%; height: 48px;">Amount of events <img class="equation_image" title="n\left(E_i\right)" src="https://canvas.jccc.edu/equation_images/n%255Cleft(E_i%255Cright)" alt="LaTeX: n\left(E_i\right)" data-equation-content="n\left(E_i\right)" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;
  &lt;mi&gt;n&lt;/mi&gt;
  &lt;mrow&gt;
    &lt;mo&gt;(&lt;/mo&gt;
    &lt;msub&gt;
      &lt;mi&gt;E&lt;/mi&gt;
      &lt;mi&gt;i&lt;/mi&gt;
    &lt;/msub&gt;
    &lt;mo&gt;)&lt;/mo&gt;
  &lt;/mrow&gt;
&lt;/math&gt;" /></td>
<td style="width: 25%; height: 48px;">Probability <img class="equation_image" title="Prob\left(E_i\right)\:=\frac{\:n\left(E_i\right)}{n\left(S\right)}" src="https://canvas.jccc.edu/equation_images/Prob%255Cleft(E_i%255Cright)%255C%253A%253D%255Cfrac%257B%255C%253An%255Cleft(E_i%255Cright)%257D%257Bn%255Cleft(S%255Cright)%257D" alt="LaTeX: Prob\left(E_i\right)\:=\frac{\:n\left(E_i\right)}{n\left(S\right)}" data-equation-content="Prob\left(E_i\right)\:=\frac{\:n\left(E_i\right)}{n\left(S\right)}" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;
  &lt;mi&gt;P&lt;/mi&gt;
  &lt;mi&gt;r&lt;/mi&gt;
  &lt;mi&gt;o&lt;/mi&gt;
  &lt;mi&gt;b&lt;/mi&gt;
  &lt;mrow&gt;
    &lt;mo&gt;(&lt;/mo&gt;
    &lt;msub&gt;
      &lt;mi&gt;E&lt;/mi&gt;
      &lt;mi&gt;i&lt;/mi&gt;
    &lt;/msub&gt;
    &lt;mo&gt;)&lt;/mo&gt;
  &lt;/mrow&gt;
  &lt;mspace width=&quot;mediummathspace&quot; /&gt;
  &lt;mo&gt;=&lt;/mo&gt;
  &lt;mfrac&gt;
    &lt;mrow&gt;
      &lt;mspace width=&quot;mediummathspace&quot; /&gt;
      &lt;mi&gt;n&lt;/mi&gt;
      &lt;mrow&gt;
        &lt;mo&gt;(&lt;/mo&gt;
        &lt;msub&gt;
          &lt;mi&gt;E&lt;/mi&gt;
          &lt;mi&gt;i&lt;/mi&gt;
        &lt;/msub&gt;
        &lt;mo&gt;)&lt;/mo&gt;
      &lt;/mrow&gt;
    &lt;/mrow&gt;
    &lt;mrow&gt;
      &lt;mi&gt;n&lt;/mi&gt;
      &lt;mrow&gt;
        &lt;mo&gt;(&lt;/mo&gt;
        &lt;mi&gt;S&lt;/mi&gt;
        &lt;mo&gt;)&lt;/mo&gt;
      &lt;/mrow&gt;
    &lt;/mrow&gt;
  &lt;/mfrac&gt;
&lt;/math&gt;" /></td>
</tr>
<tr style="height: 24px;">
<td style="width: 24.7449%; height: 24px;">2</td>
<td style="width: 41.2551%; height: 24px;">{ (1,1) }</td>
<td style="width: 25%; height: 24px;">1</td>
<td style="width: 25%; height: 24px;">1/36</td>
</tr>
<tr style="height: 24px;">
<td style="width: 24.7449%; height: 24px;">3</td>
<td style="width: 41.2551%; height: 24px;">{ (1,2), (2,1) }</td>
<td style="width: 25%; height: 24px;">2</td>
<td style="width: 25%; height: 24px;">2/36</td>
</tr>
<tr style="height: 24px;">
<td style="width: 24.7449%; height: 24px;">4</td>
<td style="width: 41.2551%; height: 24px;">{ (1,3), (2,2), (3,1) }</td>
<td style="width: 25%; height: 24px;">3</td>
<td style="width: 25%; height: 24px;">3/36</td>
</tr>
<tr style="height: 24px;">
<td style="width: 24.7449%; height: 24px;">5</td>
<td style="width: 41.2551%; height: 24px;">{ (1,4), (2,3), (3,2), (4,1) }</td>
<td style="width: 25%; height: 24px;">4</td>
<td style="width: 25%; height: 24px;">4/36</td>
</tr>
<tr style="height: 24px;">
<td style="width: 24.7449%; height: 24px;">6</td>
<td style="width: 41.2551%; height: 24px;">{ (1,5), (2,4), (3,3), (4,2), (5,1) }</td>
<td style="width: 25%; height: 24px;">5</td>
<td style="width: 25%; height: 24px;">5/36</td>
</tr>
<tr style="height: 48px;">
<td style="width: 24.7449%; height: 48px;">7</td>
<td style="width: 41.2551%; height: 48px;">{ (1,6), (2,5), (3,4), (4,3), (5,2), (6,1) }</td>
<td style="width: 25%; height: 48px;">6</td>
<td style="width: 25%; height: 48px;">6/36</td>
</tr>
<tr style="height: 24px;">
<td style="width: 24.7449%; height: 24px;">8</td>
<td style="width: 41.2551%; height: 24px;">{ (2,6), (3,5), (4,4), (5,3), (6,2) }</td>
<td style="width: 25%; height: 24px;">5</td>
<td style="width: 25%; height: 24px;">5/36</td>
</tr>
<tr style="height: 25.4334px;">
<td style="width: 24.7449%; height: 25.4334px;">9</td>
<td style="width: 41.2551%; height: 25.4334px;">{ (3,6), (4,5), (5,4), (6,3) }</td>
<td style="width: 25%; height: 25.4334px;">4</td>
<td style="width: 25%; height: 25.4334px;">4/36</td>
</tr>
<tr style="height: 24px;">
<td style="width: 24.7449%; height: 24px;">10</td>
<td style="width: 41.2551%; height: 24px;">{ (4,6), (5,5), (6,4)</td>
<td style="width: 25%; height: 24px;">3</td>
<td style="width: 25%; height: 24px;">3/36</td>
</tr>
<tr style="height: 24px;">
<td style="width: 24.7449%; height: 24px;">11</td>
<td style="width: 41.2551%; height: 24px;">{ (5,6), (6,5) }</td>
<td style="width: 25%; height: 24px;">2</td>
<td style="width: 25%; height: 24px;">2/36</td>
</tr>
<tr style="height: 24px;">
<td style="width: 24.7449%; height: 24px;">12</td>
<td style="width: 41.2551%; height: 24px;">{ (6,6) }</td>
<td style="width: 25%; height: 24px;">1</td>
<td style="width: 25%; height: 24px;">1/36</td>
</tr>
</tbody>
</table>

### Test 3: Flipping 3 coins

When flipping three coins, the sample size *n(S)* is 8.

If we add +1 for each Heads, and +0 for each Tails, then there are 4 possible outcomes:

<table style="width: 100%;" border="1">
<tbody>
<tr>
<td style="width: 35%;">Outcome value <img class="equation_image" title="x_i" src="https://canvas.jccc.edu/equation_images/x_i" alt="LaTeX: x_i" data-equation-content="x_i" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;
  &lt;msub&gt;
    &lt;mi&gt;x&lt;/mi&gt;
    &lt;mi&gt;i&lt;/mi&gt;
  &lt;/msub&gt;
&lt;/math&gt;" /></td>
<td style="width: 31.4028%;">Events. <img class="equation_image" title="E_i" src="https://canvas.jccc.edu/equation_images/E_i" alt="LaTeX: E_i" data-equation-content="E_i" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;
  &lt;msub&gt;
    &lt;mi&gt;E&lt;/mi&gt;
    &lt;mi&gt;i&lt;/mi&gt;
  &lt;/msub&gt;
&lt;/math&gt;" /></td>
<td style="width: 25.5972%;">Amount of events <img class="equation_image" title="n\left(E_i\right)" src="https://canvas.jccc.edu/equation_images/n%255Cleft(E_i%255Cright)" alt="LaTeX: n\left(E_i\right)" data-equation-content="n\left(E_i\right)" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;
  &lt;mi&gt;n&lt;/mi&gt;
  &lt;mrow&gt;
    &lt;mo&gt;(&lt;/mo&gt;
    &lt;msub&gt;
      &lt;mi&gt;E&lt;/mi&gt;
      &lt;mi&gt;i&lt;/mi&gt;
    &lt;/msub&gt;
    &lt;mo&gt;)&lt;/mo&gt;
  &lt;/mrow&gt;
&lt;/math&gt;" /></td>
<td style="width: 25.5972%;">Probability <img class="equation_image" title="Prob\left(E_i\right)\:=\frac{\:n\left(E_i\right)}{n\left(S\right)}" src="https://canvas.jccc.edu/equation_images/Prob%255Cleft(E_i%255Cright)%255C%253A%253D%255Cfrac%257B%255C%253An%255Cleft(E_i%255Cright)%257D%257Bn%255Cleft(S%255Cright)%257D" alt="LaTeX: Prob\left(E_i\right)\:=\frac{\:n\left(E_i\right)}{n\left(S\right)}" data-equation-content="Prob\left(E_i\right)\:=\frac{\:n\left(E_i\right)}{n\left(S\right)}" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;
  &lt;mi&gt;P&lt;/mi&gt;
  &lt;mi&gt;r&lt;/mi&gt;
  &lt;mi&gt;o&lt;/mi&gt;
  &lt;mi&gt;b&lt;/mi&gt;
  &lt;mrow&gt;
    &lt;mo&gt;(&lt;/mo&gt;
    &lt;msub&gt;
      &lt;mi&gt;E&lt;/mi&gt;
      &lt;mi&gt;i&lt;/mi&gt;
    &lt;/msub&gt;
    &lt;mo&gt;)&lt;/mo&gt;
  &lt;/mrow&gt;
  &lt;mspace width=&quot;mediummathspace&quot; /&gt;
  &lt;mo&gt;=&lt;/mo&gt;
  &lt;mfrac&gt;
    &lt;mrow&gt;
      &lt;mspace width=&quot;mediummathspace&quot; /&gt;
      &lt;mi&gt;n&lt;/mi&gt;
      &lt;mrow&gt;
        &lt;mo&gt;(&lt;/mo&gt;
        &lt;msub&gt;
          &lt;mi&gt;E&lt;/mi&gt;
          &lt;mi&gt;i&lt;/mi&gt;
        &lt;/msub&gt;
        &lt;mo&gt;)&lt;/mo&gt;
      &lt;/mrow&gt;
    &lt;/mrow&gt;
    &lt;mrow&gt;
      &lt;mi&gt;n&lt;/mi&gt;
      &lt;mrow&gt;
        &lt;mo&gt;(&lt;/mo&gt;
        &lt;mi&gt;S&lt;/mi&gt;
        &lt;mo&gt;)&lt;/mo&gt;
      &lt;/mrow&gt;
    &lt;/mrow&gt;
  &lt;/mfrac&gt;
&lt;/math&gt;" /></td>
</tr>
<tr>
<td style="width: 35%;">3</td>
<td style="width: 31.4028%;">{ (H,H,H) }</td>
<td style="width: 25.5972%;">1</td>
<td style="width: 25.5972%;">1/8</td>
</tr>
<tr>
<td style="width: 35%;">2</td>
<td style="width: 31.4028%;">{ (H,H,T), (H,T,H), (T,H,H) }</td>
<td style="width: 25.5972%;">3</td>
<td style="width: 25.5972%;">3/8</td>
</tr>
<tr>
<td style="width: 35%;">1</td>
<td style="width: 31.4028%;">{ (T,T,H), (T,H,T), (H,T,T) }</td>
<td style="width: 25.5972%;">3</td>
<td style="width: 25.5972%;">3/8</td>
</tr>
<tr>
<td style="width: 35%;">0</td>
<td style="width: 31.4028%;">{ (T,T,T) }</td>
<td style="width: 25.5972%;">1</td>
<td style="width: 25.5972%;">1/8</td>
</tr>
</tbody>
</table>
